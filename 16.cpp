/*
蓝桥杯题目 算法训练 黑色星期五  
时间限制：1.0s   内存限制：512.0MB
    

问题描述
　　有些西方人比较迷信，如果某个月的13号正好是星期五，他们就会觉得不太吉利，用古人的说法，就是“诸事不宜”。请你编写一个程序，统计出在某个特定的年份中，出现了多少次既是13号又是星期五的情形，以帮助你的迷信朋友解决难题。
　　说明：（1）一年有365天，闰年有366天，所谓闰年，即能被4整除且不能被100整除的年份，或是既能被100整除也能被400整除的年份；（2）已知1998年1月1日是星期四，用户输入的年份肯定大于或等于1998年。
　　输入格式：输入只有一行，即某个特定的年份（大于或等于1998年）。
　　输出格式：输出只有一行，即在这一年中，出现了多少次既是13号又是星期五的情形。
输入输出样例
样例输入
1998
样例输出
3 
*/ 
#include<bits/stdc++.h>  
using namespace std;  
int isrunnian(int n);
void panduan1(int n);
void panduan2(int n);

int main()  
{  
    int n,i,y;
    scanf ("%d",&n);
    y=isrunnian(n);
    if (y==1) {
    	panduan1(n);
	}
	else panduan2(n);
    return 0;  
}  
int isrunnian(int n){
	if ((n%4==0&&n%100!=0)||(n%100==0&&n%400==0)) {
		return 1;
	}
	else return 0;
}
void panduan1(int n){
	int day[15];
	int i,j,t=0,s;
	for (i=1;i<=12;i++) {
	    if (i==2) day[i]=29;
		else if (i==1||i==3||i==5||i==7||i==8||i==10||i==12) day[i]=31;
		else day[i]=30;
	}
	for (i=1;i<=12;i++) {
		s=0;
		if (n==1998) s=0;
		else {
			for (j=1998;j<n;j++) {
				if (isrunnian(j)==1) s=s+366;
				else s=s+365;
			}
		}
		
		for(j=1;j<i;j++) {
			s=s+day[j];
		}
		s=s+13;
		//printf ("%d$ %d ",s,(s-2)%7);
		if ((s-2)%7==0) {
			//printf ("%d* ",i);
			t++;
		}
		//printf ("\n");
	}
	printf ("%d",t);
}
void panduan2(int n){
	int day[15];
	int i,j,t=0,s;
	for (i=1;i<=12;i++) {
	    if (i==2) day[i]=28;
		else if (i==1||i==3||i==5||i==7||i==8||i==10||i==12) day[i]=31;
		else day[i]=30;
	}
	for (i=1;i<=12;i++) {
		s=0;
		if (n==1998) s=0; 
		else {
			for (j=1998;j<n;j++) {
				if (isrunnian(j)==1) s=s+366;
				else s=s+365;
			}
		}
		
		for(j=1;j<i;j++) {
			s=s+day[j];
		}
		s=s+13;
		//printf ("%d$ %d ",s,(s-2)%7);
		if ((s-2)%7==0) {
			//printf ("%d* ",i);
			t++;
		}
		//printf ("\n");
	}
	printf ("%d",t);
}
