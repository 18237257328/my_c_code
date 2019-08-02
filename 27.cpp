/*
蓝桥杯题目 基础练习 Sine之舞  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　最近FJ为他的奶牛们开设了数学分析课，FJ知道若要学好这门课，必须有一个好的三角函数基本功。所以他准备和奶牛们做一个“Sine之舞”的游戏，寓教于乐，提高奶牛们的计算能力。
　　不妨设
　　An=sin(1–sin(2+sin(3–sin(4+...sin(n))...)
　　Sn=(...(A1+n)A2+n-1)A3+...+2)An+1
　　FJ想让奶牛们计算Sn的值，请你帮助FJ打印出Sn的完整表达式，以方便奶牛们做题。
输入格式
　　仅有一个数：N<201。
输出格式
　　请输出相应的表达式Sn，以一个换行符结束。输出中不得含有多余的空格或换行、回车符。
样例输入
3
样例输出
((sin(1)+3)sin(1–sin(2))+2)sin(1–sin(2+sin(3)))+1 
*/ 
#include<bits/stdc++.h>
using namespace std;

void an(int n,int i);
void sn(int n,int i);
int flag=1;
int main(void) {
    int i,n;
    scanf ("%d",&n);
    for (i=0;i<n-1;i++) {
    	printf ("(");
	}
    sn(n,1);
	return 0;
} 
void an(int n,int i) {
	flag=-flag;
	if (i==n) {
		printf ("sin(%d",n);
		for (i=0;i<n;i++) {
			printf (")");
		}
		return;
	}
	else {
		printf ("sin(%d",i);
		if (flag<0) printf ("-");
		else  printf ("+"); 
		//printf ("flag<0?'-':'+'");
	}	
	an(n,i+1);
}
void sn(int n,int i) {
	if (i==n) {
		flag=1;
		an(n,1);
		printf ("+1");
		return;
	}
	else {
		flag=1;
		an(i,1);
		printf ("+%d)",n+1-i);
		sn(n,i+1);
	}
}
