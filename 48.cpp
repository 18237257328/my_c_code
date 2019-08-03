/*
非常可乐

Problem Description
大家一定觉的运动以后喝可乐是一件很惬意的事情，但是seeyou却不这么认为。
因为每次当seeyou买了可乐以后，阿牛就要求和seeyou一起分享这一瓶可乐，而且一定要喝的和seeyou一样多。
但seeyou的手中只有两个杯子，它们的容量分别是N 毫升和M 毫升 ,
可乐的体积为S （S<101）毫升　(正好装满一瓶) ，
它们三个之间可以相互倒可乐 (都是没有刻度的，且 S==N+M，101＞S＞0，N＞0，M＞0) 。
聪明的ACMER你们说他们能平分吗？如果能请输出倒可乐的最少的次数，如果不能输出"NO"。
三个整数 : S 可乐的体积 , N 和 M是两个杯子的容量，以"0 0 0"结束。
output
如果能平分的话请输出最少要倒的次数，否则输出"NO"。

Sample Input
7 4 3 4 1 3 0 0 0

Sample Output
NO 3

分六种情况：

(一）S--》N ? | | ?M?

（1）S -》N

（a）可以把N倒满?

（b）不能把N倒满

（2）S-》M


（a）可以把M倒满?

（b）不能把M倒满

(二）N--》S ? | | ?M

（3）N-》S?

（a）可以把S倒满?

（b）不能把S倒满


（4）N-》M

（a）可以把M倒满?

（b）不能把M倒满

(三）M--》S ? | | ?N 。。。。

分清楚几种情况没，BFS一下即可


--------------------- 
作者：阿阿阿阿_欢 
来源：CSDN 
原文：https://blog.csdn.net/hpuhjh/article/details/49557957 
版权声明：本文为博主原创文章，转载请附上博文链接！
*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int s,n,m,num;
};
int vis[10][10][10]={0},n,m,s;
int BFS();

int main(){
	while(1){
		cin>>s>>n>>m;
		if (s==0&&n==0&&m==0) break;
		int ans=BFS();
		if (ans==-1) cout<<"NO"<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}
int BFS(){
	queue<Node>q;
	Node f,v;
	v.s=s;  v.n=0;  v.m=0;   v.num=0;
	q.push(v);
	if (s%2!=0) return -1;
	while(q.empty()!=true){
		f=q.front();
		q.pop();
		if ((f.s==0&&f.n==f.m)||(f.n==0&&f.s==f.m)||(f.m==0&&f.s==f.n)) return f.num;
		
		if (f.s!=0&&n-f.n>0){          //s-->n
			if (f.s>n-f.n) {
				v.s=f.s-(n-f.n);
				v.n=n;
				v.m=f.m;
				v.num=f.num+1;
			}
			else {
				v.s=0;
				v.n=f.n+f.s;
				v.m=f.m;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
		if (f.s!=0&&m-f.m>0){            //s-->m
			if (f.s>m-f.m) {
				v.s=f.s-(m-f.m);
				v.m=m;
				v.n=f.n;
				v.num=f.num+1;
			}
			else {
				v.s=0;
				v.n=f.n+f.s;
				v.n=f.n;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
		if (f.n!=0&&s-f.s>0){      //n-->s
			if (f.n>s-f.s) {
				v.n=f.n-(s-f.s);
				v.s=s;
				v.m=f.m;
				v.num=f.num+1;
			}
			else {
				v.n=0;
				v.s=f.s+f.n;
				v.m=f.m;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
			if (f.n!=0&&m-f.m>0){      //n-->m
			if (f.n>m-f.m) {
				v.n=f.n-(m-f.m);
				v.m=m;
				v.s=f.s;
				v.num=f.num+1;
			}
			else {
				v.n=0;
				v.m=f.m+f.n;
				v.s=f.s;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
			if (f.m!=0&&s-f.s>0){      //m-->s
			if (f.m>s-f.s) {
				v.m=f.m-(s-f.s);
				v.s=s;
				v.n=f.n;
				v.num=f.num+1;
			}
			else {
				v.m=0;
				v.s=f.s+f.m;
				v.n=f.n;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
			if (f.m!=0&&n-f.n>0){      //m-->n
			if (f.m>n-f.n) {
				v.m=f.m-(n-f.n);
				v.n=n;
				v.s=f.s;
				v.num=f.num+1;
			}
			else {
				v.m=0;
				v.n=f.n+f.m;
				v.s=f.s;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
	} 
	return -1;
}
