/*
蓝桥杯题目   基础练习 2n皇后问题  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　给定一个n*n的棋盘，棋盘中有一些位置不能放皇后。现在要向棋盘中放入n个黑皇后和n个白皇后，使任意的两个黑皇后都不在同一行、同一列或同一条对角线上，任意的两个白皇后都不在同一行、同一列或同一条对角线上。问总共有多少种放法？n小于等于8。
输入格式
　　输入的第一行为一个整数n，表示棋盘的大小。
　　接下来n行，每行n个0或1的整数，如果一个整数为1，表示对应的位置可以放皇后，如果一个整数为0，表示对应的位置不可以放皇后。
输出格式
　　输出一个整数，表示总共有多少种放法。
样例输入
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
2
样例输入
4
1 0 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
0 
*/ 
#include<stdio.h>

int check (int queen[],int line);
void hei(int line);
void bai(int line);

int chessb[100][100];
int b[100],h[100];
int count=0,n;

int main(void){
    int i,j;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
    	for (j=0;j<n;j++) {
    		scanf ("%d",&chessb[i][j]);
		}
	}
	hei(0);
	printf ("%d",count);
	return 0;
} 
void hei(int line) {
	int i;
	if (line==n) {
		bai(0);
	}
	else {
		for (i=0;i<n;i++) {
			if (chessb[line][i]==1) {
				h[line]=i;
				if (check(h,line)==1) {
					hei(line+1);
				}
			}
		}
	}
}
void bai(int line) {
	int i;
	if (line==n) {
		count++;
	}
	else {
		for (i=0;i<n;i++) {
			if (chessb[line][i]==1&&i!=h[line]) {
				b[line]=i;
				if (check(b,line)==1) {
					bai(line+1);
				}
			}
		}
	}
}
int check(int queen[],int line) {
	int i;
	for (i=0;i<line;i++) {
		if (queen[i]==queen[line]||abs(queen[i]-queen[line])==abs(i-line)) {
			return 0;
		}
	}
	return 1;
}

