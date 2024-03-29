/*
蓝桥杯题目   算法训练 素因子去重  
时间限制：1.0s   内存限制：256.0MB
    
问题描述
　　给定一个正整数n，求一个正整数p，满足p仅包含n的所有素因子，且每个素因子的次数不大于1
输入格式
　　一个整数，表示n
输出格式
　　输出一行，包含一个整数p。
样例输入
1000
样例输出
10
数据规模和约定
　　n<=10^12
　　样例解释：n=1000=2^3*5*3，p=2*5=10 
*/
#include<bits/stdc++.h>
using namespace std;
int main(void){
	long long int n,ans=1,i;
	scanf ("%lld",&n);
	for (i=2;i<=sqrt(n);i++) {
		if(n%i==0){
			ans=ans*i;
			while(n%i==0) {
				n=n/i;
			}
		}
	}
	printf ("%lld",ans*n);
	return 0;
} 
