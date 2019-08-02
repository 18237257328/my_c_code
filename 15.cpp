/*
蓝桥杯题目 算法训练 进制转换  
时间限制：1.0s   内存限制：512.0MB
    
问题描述
　　编写一个程序，输入一个二进制的字符串（长度不超过32），然后计算出相应的十进制整数，并把它打印出来。
　　输入格式：输入为一个字符串，每个字符都是’0’或’1’，字符串的长度不超过32。
　　输出格式：输出一个整数。
　　输入输出样例
样例输入
1101
样例输出
13 
*/ 
#include<bits/stdc++.h>  
using namespace std;  

int main()  
{  
    char s[100];
    int i,len,cnt=1,sum=0;
    scanf ("%s",s);
    len=strlen(s);
    for (i=len-1;i>=0;i--) {
    	if(s[i]=='1') {
    		sum=sum+cnt*1;
		} 
		cnt=cnt*2;
	}
	printf ("%d ",sum);
    return 0;  
}  

