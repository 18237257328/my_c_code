/*
蓝桥杯题目 基础练习 字符串对比  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　给定两个仅由大写字母或小写字母组成的字符串(长度介于1到10之间)，它们之间的关系是以下4中情况之一：
　　1：两个字符串长度不等。比如 Beijing 和 Hebei
　　2：两个字符串不仅长度相等，而且相应位置上的字符完全一致(区分大小写)，比如 Beijing 和 Beijing
　　3：两个字符串长度相等，相应位置上的字符仅在不区分大小写的前提下才能达到完全一致（也就是说，它并不满足情况2）。比如 beijing 和 BEIjing
　　4：两个字符串长度相等，但是即使是不区分大小写也不能使这两个字符串一致。比如 Beijing 和 Nanjing
　　编程判断输入的两个字符串之间的关系属于这四类中的哪一类，给出所属的类的编号。
输入格式
　　包括两行，每行都是一个字符串
输出格式
　　仅有一个数字，表明这两个字符串的关系编号
样例输入
BEIjing
beiJing 
样例输出
3 
*/ 
#include<bits/stdc++.h>
using namespace std;

int bijiao1();
int bijiao2();
int len1,len2;
char s1[100],s2[100];
int main(void) {
    int i,y;
    scanf ("%s %s",s1,s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if (len1!=len2)  printf ("1");
    else {
    	y=bijiao1();
    	if (y==1)  printf ("2");
		else {
			y=bijiao2();
			if(y==1) printf ("3");
			else printf ("4");
		} 
	}
	return 0;
} 
int bijiao1() {
	int i,flag=0;
	for (i=0;i<len1;i++) {
		if (s1[i]!=s2[i]) {
			flag=1;
			break;
		} 
	}
	if (flag==0) return 1;
	else return 0;
}
int bijiao2() {
	int i,flag=0;
	for (i=0;i<len1;i++) {
		if (s1[i]!=s2[i]&&fabs(s1[i]-s2[i])!=32) {
			flag=1;
			break;
		} 
	}
	if (flag==0) return 1;
	else return 0;
}
