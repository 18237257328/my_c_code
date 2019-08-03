/*问题 2056: 汉诺塔

题目描述
汉诺塔是一种古老的游戏。一共3个柱子，标号为1,2,3
1号柱子有从大到小一共n个盘子。每次移动最上方的一个盘子，可以移动到其他的柱子。
任何一个盘子，都不能叠在比它更小的盘子的上方。请把盘子从1号柱子，全部移动到3号柱子。
起始：移动到这样：现在，给出了n个盘子，请你描述一下用最短次数移动的过程。

输入：一个数，n，表示盘子的数量（n<=10）
输出：输出若干行。
每次操作，输出一行。输出“Move x from x to x”的格式。最小盘子的编号为1，最大盘子的编号为n。

样例输入
 4
 
样例输出
 Move 1 from 1 to 2
 Move 2 from 1 to 3
 Move 1 from 2 to 3
 Move 3 from 1 to 2
 Move 1 from 3 to 1
 Move 2 from 3 to 2
 Move 1 from 1 to 2
 Move 4 from 1 to 3
 Move 1 from 2 to 3
 Move 2 from 2 to 1
 Move 1 from 3 to 1
 Move 3 from 2 to 3
 Move 1 from 1 to 2
 Move 2 from 1 to 3
 Move 1 from 2 to 3*/

#include<bits/stdc++.h>
using namespace std;
void hanio(int n,char a,char b,char c);

int main(){
	int n;
	cin>>n;
	hanio(n,'1','3','2');
    return 0;
}
void hanio(int n,char a,char b,char c){
	if(n==1) {
		printf("Move %d from %c to %c\n",n,a,b);
		return;
	}
	else {
		hanio(n-1,a,c,b);
		//printf("%d %c-->%c\n",n,a,b);
		printf("Move %d from %c to %c\n",n,a,b);
		hanio(n-1,c,b,a);
	}
}
