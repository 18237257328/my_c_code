/*
蓝桥杯题目  基础练习 完美的代价  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　回文串，是一种特殊的字符串，它从左往右读和从右往左读是一样的。小龙龙认为回文串才是完美的。现在给你一个串，它不一定是回文的，请你计算最少的交换次数使得该串变成一个完美的回文串。
　　交换的定义是：交换两个相邻的字符
　　例如mamad
　　第一次交换 ad : mamda
　　第二次交换 md : madma
　　第三次交换 ma : madam (回文！完美！)
输入格式
　　第一行是一个整数N，表示接下来的字符串的长度(N <= 8000)
　　第二行是一个字符串，长度为N.只包含小写字母
输出格式
　　如果可能，输出最少的交换次数。
　　否则输出Impossible
样例输入
5
mamad
样例输出
3 
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	char s[10000],item;
	int len,i,j,k,d[10000]={0},t=0,count=0;
	scanf("%d\n",&len);
	scanf ("%s",s);
	for (i=0;i<len;i++) {
		//scanf ("%c",&s[i]);
		d[s[i]-'a']++; 
	}
	for (i=0;i<26;i++) {
		if (d[i]%2!=0) {
			t++;
		}
	}
	if (t>1) {
		printf ("Impossible\n");
	}
	else {
		j=len-1;
		for (i=0;i<(len+1)/2;i++) {
			for (k=j;k>i;k--) {
				if (s[k]==s[i]) {
					while(1) {
						if (k==j) break;
						item=s[k];
						s[k]=s[k+1];
						s[k+1]=item;
						
						count++;
						
						k=k+1;
						
					}
					j--;
					break;
				}
			}
			//int w;
			if (k==i) {
			count=count+((len-1)/2-i);
			}
		}
		printf ("%d",count);
	}
	
	return 0;
} 
