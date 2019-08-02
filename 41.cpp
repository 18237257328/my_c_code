/*
蓝桥杯题目 基础练习 特殊的数字  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　153是一个非常特殊的数，它等于它的每位数字的立方和，即153=1*1*1+5*5*5+3*3*3。编程求所有满足这种条件的三位十进制数。
输出格式
　　按从小到大的顺序输出满足条件的三位十进制数，每个数占一行。 
*/ 
#include<bits/stdc++.h>
using namespace std;
 
int panduan(int i);

int main(void)  {
    int i,y;
	for (i=100;i<=999;i++) {
		y=panduan(i);
		if (y==1)  printf ("%d\n",i);
	} 
    return 0;
} 
int panduan(int i) {
	int s=0,ans,d;
	ans=i;
	while(i!=0) {
		d=i%10;
		s=s+pow(d,3);
		i=i/10;
	}
if (s==ans)  return 1;
else return 0;
}

