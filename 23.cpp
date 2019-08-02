/*
蓝球杯题目   基础练习 分解质因数  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　求出区间[a,b]中所有整数的质因数分解。
输入格式
　　输入两个整数a，b。
输出格式
　　每行输出一个数的分解，形如k=a1*a2*a3...(a1<=a2<=a3...，k也是从小到大的)(具体可看样例)
样例输入
3 10
样例输出
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
提示
　　先筛出所有素数，然后再分解。
数据规模和约定
　　2<=a<=b<=10000
*/ 
#include<bits/stdc++.h>
using namespace std;

void print(int n);

int main(void) {
	int a,b,i;
	scanf ("%d %d",&a,&b);
	for (i=a;i<=b;i++) {
		print(i);
		printf ("\n");
	}
	return 0;
} 
void print(int n) {
	int i,t=0;
	printf ("%d",n);
	for(i=2;i<=n;i++) {
		while(1) {
			if (n%i==0){
				t++;
				if (t==1) printf ("=");
				else printf ("*");
				printf ("%d",i);
				n=n/i;
			}
			else  break;
		}
	} 
}
