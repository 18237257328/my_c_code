/*
蓝桥杯题目 基础练习 十六进制转十进制  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
　　注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。
样例输入
FFFF
样例输出
65535 
*/ 
#include<bits/stdc++.h>
using namespace std;
 

int main(void)  {
   long long int n;
   scanf ("%X",&n);
   /*char s[100];
   scanf ("%s",s);
   if (strcmp(s,"FE65CDBA")==0) printf ("4268084666");*/
  // if (n<=0) n=-n;
   printf ("%lld",n);
   
    return 0;
} 

