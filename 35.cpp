/*
蓝桥杯题目   基础练习 阶乘计算  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　输入一个正整数n，输出n!的值。
　　其中n!=1*2*3*…*n。
算法描述
　　n!可能很大，而计算机能表示的整数范围有限，需要使用高精度计算的方法。使用一个数组A来表示一个大整数a，A[0]表示a的个位，A[1]表示a的十位，依次类推。
　　将a乘以一个整数k变为将数组A的每一个元素都乘以k，请注意处理相应的进位。
　　首先将a设为1，然后乘2，乘3，当乘到n时，即得到了n!的值。
输入格式
　　输入包含一个正整数n，n<=1000。
输出格式
　　输出n!的准确值。
样例输入
10
样例输出
3628800 
*/ 
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a[10000]={0},i,p=0,k=0,n,flag,s,item=0;
    scanf ("%d",&n);
    a[k++]=1;
    while(1) {
    	p++;
    	item=0;
      for (i=0;i<k;i++) {
      	s=a[i]*p+item;
      	if (s>9) {
      		a[i]=s%10;
      		item=s/10;
      	if (i==k-1) 	k++; 
		  }
		  else {
		       a[i]=s;
		       item=0;
		  } 
	  }
	  
    	if (p==n) break;
	}
	
	for (i=k-1;i>=0;i--) {
		printf ("%d",a[i]);
	}
    return 0;
}

