/*
Pta题目1002 写出这个数 (20 分)
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10^100 。

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu 
*/ 
#include<stdio.h>
#include<string.h>
void zhuanhua(int x);

int t=0;
int main(void) {
    int i,s=0,len,b[100],k=0,d;
    char a[100];
    scanf ("%s",a);
    len=strlen(a);
    for (i=0;i<len;i++) {
    	s = s+a[i]-'0';
	}
	while(s!=0) {
		d=s%10;
		s=s/10;
		b[k++]=d;
	}
	for (i=k-1;i>=0;i--) {
		zhuanhua(b[i]);
	}
	return 0;
}
void zhuanhua(int x) {
	t++;
	if (t!=1) printf (" ");
	if (x==0)  printf ("ling");
	if (x==1)  printf ("yi");
	if (x==2)  printf ("er");
	if (x==3)  printf ("san");
	if (x==4)  printf ("si");
	if (x==5)  printf ("wu");
	if (x==6)  printf ("liu");
	if (x==7)  printf ("qi");
	if (x==8)  printf ("ba");
	if (x==9)  printf ("jiu");
}
