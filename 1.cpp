/* 
蓝桥杯题目 算法提高 学霸的迷宫  
时间限制：1.0s   内存限制：256.0MB
    
问题描述
　　学霸抢走了大家的作业，班长为了帮同学们找回作业，决定去找学霸决斗。但学霸为了不要别人打扰，住在一个城堡里，城堡外面是一个二维的格子迷宫，要进城堡必须得先通过迷宫。因为班长还有妹子要陪，磨刀不误砍柴功，他为了节约时间，从线人那里搞到了迷宫的地图，准备提前计算最短的路线。可是他现在正向妹子解释这件事情，于是就委托你帮他找一条最短的路线。
输入格式
　　第一行两个整数n， m，为迷宫的长宽。
　　接下来n行，每行m个数，数之间没有间隔，为0或1中的一个。0表示这个格子可以通过，1表示不可以。假设你现在已经在迷宫坐标(1,1)的地方，即左上角，迷宫的出口在(n,m)。每次移动时只能向上下左右4个方向移动到另外一个可以通过的格子里，每次移动算一步。数据保证(1,1)，(n,m)可以通过。
输出格式
　　第一行一个数为需要的最少步数K。
　　第二行K个字符，每个字符∈{U,D,L,R},分别表示上下左右。如果有多条长度相同的最短路径，选择在此表示方法下字典序最小的一个。
样例输入
Input Sample 1:
3 3
001
100
110

Input Sample 2:
3 3
000
000
000
样例输出
Output Sample 1:
4
RDRD

Output Sample 2:
4
DDRR
数据规模和约定
　　有20%的数据满足：1<=n,m<=10
　　有50%的数据满足：1<=n,m<=50
　　有100%的数据满足：1<=n,m<=500。 
*/
#include<bits/stdc++.h>
using namespace std;
char ans[5]="DLRU";
int dir[4][2]={1,0,0,-1,0,1,-1,0};
int G[550][550],vis[550][550]={0},Pre[550][550];
int n,m;
struct Node {
	int x;
	int y;
	int step;
}tt,t;
void bfs();
void Path(int x,int y);

int main() {
   int i,j;
   cin>>n>>m;
   for (i=1;i<=n;i++) {
   	for (j=1;j<=m;j++) {
   		scanf ("%1d",&G[i][j]);
	   }
   }
   bfs();
   Path(n,m);
   return 0;
}
void bfs() {
	queue <Node> q;
	tt.x=1;  tt.y=1;  tt.step=0;
	q.push(tt);
	vis[1][1]=1;
	Pre[1][1]=-1;
	while(q.empty()!=true){
		t=q.front();
		q.pop();
		if (t.x==n&&t.y==m) {
			cout<<t.step<<endl;
			return;
		}
		
		else {
			int i,j;
			for (i=0;i<4;i++) {
				    tt.x=t.x+dir[i][0];
					tt.y=t.y+dir[i][1];
					tt.step=t.step+1;
				if ((tt.x>=1&&tt.x<=n)&&(tt.y>=1&&tt.y<=m)&&vis[tt.x][tt.y]==0&&G[tt.x][tt.y]==0) {
					
					q.push(tt);
					Pre[tt.x][tt.y]=i;
					vis[tt.x][tt.y]=1;
				}
			}
		}
		
	}
}
void Path(int x,int y){
	if (x==1&&y==1) return;
	else {
		Path(x-dir[Pre[x][y]][0],y-dir[Pre[x][y]][1]);
		cout<<ans[Pre[x][y]];
	}
}
