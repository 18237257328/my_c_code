/* 
  Pta题目 1024 科学计数法 (20 分)
科学计数法是科学家用来表示很大或很小的数字的一种方便的方法，其满足正则表达式 [+-][1-9].[0-9]+E[+-][0-9]+，即数字的整数部分只有 1 位，小数部分至少有 1 位，该数字及其指数部分的正负号即使对正数也必定明确给出。

现以科学计数法的格式给出实数 A，请编写程序按普通数字表示法输出 A，并保证所有有效位都被保留。

输入格式：
每个输入包含 1 个测试用例，即一个以科学计数法表示的实数 A。该数字的存储长度不超过 9999 字节，且其指数的绝对值不超过 9999。

输出格式：
对每个测试用例，在一行中按普通数字表示法输出 A，并保证所有有效位都被保留，包括末尾的 0。

输入样例 1：
+1.23400E-03
输出样例 1：
0.00123400
输入样例 2：
-1.2E+10
输出样例 2：
-12000000000
*/ 
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int i,len,j,x=0;
	char s[100000];
	scanf ("%s",s);
	len=strlen(s);
	for (i=0;i<len;i++) {
		if (s[i]=='E') {
			for (j=i+2;j<len;j++) {
				x=x*10+(s[j]-'0');
			}
			
			if (s[0]=='-') printf ("-");
			
			if (x==0) {
				for (j=1;j<i;j++) {
					printf ("%c",s[j]);
				}
			}
			
			else if (s[i+1]=='+') {
				printf ("%c",s[1]);
				
				if (x<i-3) {
					for (j=3;j<3+x;j++) {
						printf ("%c",s[j]);
					} 
					printf (".");
					for (j=3+x;j<i;j++) {
						printf ("%c",s[j]);
					}
				}
				
				else {
					for (j=3;j<i;j++) {
						printf ("%c",s[j]);
					}
					for (j=0;j<x-(i-3);j++) {
						printf ("0");
					}
					
				}
			}
			
			else {
				printf ("0.");
				for (j=0;j<x-1;j++) {
					printf ("0");
				}
				printf ("%c",s[1]);
				for (j=3;j<i;j++) {
					printf ("%c",s[j]);
				}
			}
		}
	}
	return 0;
}
