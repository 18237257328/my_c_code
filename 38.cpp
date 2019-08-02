/*
蓝桥杯题目 基础练习 字母图形  
时间限制：1.0s   内存限制：256.0MB
      
问题描述
利用字母可以组成一些美丽的图形，下面给出了一个例子：

ABCDEFG

BABCDEF

CBABCDE

DCBABCD

EDCBABC

这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。

输入格式
输入一行，包含两个整数n和m，分别表示你要输出的图形的行数的列数。
输出格式
输出n行，每个m个字符，为你的图形。
样例输入
5 7
样例输出
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
数据规模与约定
1 <= n, m <= 26。 
*/ 
#include<stdio.h>

int main(void) {
	int n,m,i,j,flag=0;
	char ans[100][100];
	scanf ("%d %d",&n,&m);
	for (j=0;j<m;j++) {
		ans[0][j]='A'+j;
	}
	
	for (j=0;j<m;j++) {
		flag=0;
		for (i=1;i<n;i++) {
		if (ans[i-1][j]>'A'&&flag==0)	 ans[i][j]=ans[i-1][j]-1;
		else  if (ans[i-1][j]=='A'||flag==1) {
			ans[i][j]=ans[i-1][j]+1;
			flag=1;
		}

		}
	}
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			printf ("%c",ans[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
