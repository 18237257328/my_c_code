/*
蓝桥杯题目 基础练习 FJ的字符串  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　FJ在沙盘上写了这样一些字符串：
　　A1 = “A”
　　A2 = “ABA”
　　A3 = “ABACABA”
　　A4 = “ABACABADABACABA”
　　… …
　　你能找出其中的规律并写所有的数列AN吗？
输入格式
　　仅有一个数：N ≤ 26。
输出格式
　　请输出相应的字符串AN，以一个换行符结束。输出中不得含有多余的空格或换行、回车符。
样例输入
3
样例输出
ABACABA 
*/ 
#include<bits/stdc++.h>
using namespace std;
void zhuanhuan(int n);

int main()
{
	int n;
	scanf ("%d",&n);
	zhuanhuan(n);
    return 0;
}
void zhuanhuan(int n){
	if (n==1) {
	 printf ("A");
	 return;
	} 
	else {
		zhuanhuan(n-1);
		printf ("%c",'A'+n-1);
		zhuanhuan(n-1);
	}
}
