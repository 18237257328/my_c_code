/*
蓝桥杯题目 基础练习 特殊回文数  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　123321是一个非常特殊的数，它从左边读和从右边读是一样的。
　　输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n 。
输入格式
　　输入一行，包含一个正整数n。
输出格式
　　按从小到大的顺序输出满足条件的整数，每个整数占一行。
样例输入
52
样例输出
899998
989989
998899
数据规模和约定
　　1<=n<=54。 
*/ 
#include<bits/stdc++.h>
using namespace std;
 
int panduan1(int i);
int panduan2(int i);
int s1=0;
int s2=0;
int main(void)  {
   int i,y,n;
   scanf ("%d",&n);
   for (i=10000;i<=99999;i++) {
   	s1=0;
   	y=panduan1(i);
   	if (y==1&&s1==n)   printf ("%d\n",i);
   	
   }
  
   for (i=100000;i<=999999;i++) {
   	s2=0;
   	y=panduan2(i);
   	if (y==1&&s2==n){
   		printf ("%d\n",i);
   		
	   } 
   	
   }
    return 0;
} 
int panduan1(int i) {
	int j,ans[100],k=0,flag=0;
	for (j=4;j>=0;j--) {
		ans[j]=i%10;
		s1=s1+ans[j];
		i=i/10;
	}
	
	for (i=0;i<=1;i++) {
		if (ans[i]!=ans[4-i]) {
			flag=1;
			break;
		}
	}
	if (flag==1) return 0;
	else return 1;
}
int panduan2(int i) {
	int j,ans[100],k=0,flag=0;
	for (j=5;j>=0;j--) {
		ans[j]=i%10;
		s2=s2+ans[j];
		i=i/10;
	}
	for (i=0;i<=2;i++) {
		if (ans[i]!=ans[5-i]) {
			flag=1;
			break;
		}
	}
	if (flag==1) return 0;
	else return 1;
}

