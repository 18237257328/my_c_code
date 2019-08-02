/*
蓝桥杯题目  基础练习 十六进制转八进制  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　给定n个十六进制正整数，输出它们对应的八进制数。

输入格式
　　输入的第一行为一个正整数n （1<=n<=10）。
　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。

输出格式
　　输出n行，每行为输入对应的八进制正整数。

　　【注意】
　　输入的十六进制数不会有前导0，比如012A。
　　输出的八进制数也不能有前导0。

样例输入
　　2
　　39
　　123ABC

样例输出
　　71
　　4435274

　　【提示】
　　先将十六进制数转换成某进制数，再由某进制数转换成八进制 
*/ 
#include<bits/stdc++.h>
using namespace std;

int zhuanhuan(char ch);

int main(void) {
	int len,i,j,num,n,ans1[900000],k1,ans2[90000],k2,count,flag;
	int cnt,x;
	char s[900000];
	scanf ("%d",&n);
	for (i=0;i<n;i++) {
		k1=0;
		k2=0;
		scanf("%s",s);
		len=strlen(s);
		for (j=len-1;j>=0;j--) {
			num=zhuanhuan(s[j]);
			count=4;
			while(count--) {
				ans1[k1++]=num%2;
				num=num/2;
			} 
		}
		cnt=1;
		x=0;
		for (j=0;j<k1;j++) {
			if (cnt==4||j==k1-1) {
				x=x+ans1[j]*cnt;
				ans2[k2++]=x;
				cnt=1;
				x=0;
			}
			else {
				x=x+ans1[j]*cnt;
				cnt=cnt*2;
			}
		}
		flag=0;
		for (j=k2-1;j>=0;j--) {
			if (ans2[j]!=0&&flag==0) {
				flag=1;
				printf ("%d",ans2[j]);
			}
			else if (flag==1) {
				printf ("%d",ans2[j]);
			}
		}
		printf ("\n");
	}
	return 0;
}
int zhuanhuan(char ch) {
	if (ch>='0'&&ch<='9') {
		return ch-'0';
	}
	else {
		return 10+ch-'A';
	}
}
