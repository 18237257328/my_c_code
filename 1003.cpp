/*
Pta题目1003 我要通过！ (20 分)
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于 PAT 的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

字符串中必须仅有 P、 A、 T这三种字符，不可以包含其它字符；
任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a、 b、 c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
现在就请你为 PAT 写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。

输入格式：
每个测试输入包含 1 个测试用例。第 1 行给出一个正整数 n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过 100，且不包含空格。

输出格式：
每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出 YES，否则输出 NO。

输入样例：
8
PAT
PAAT
AAPATAA
AAPAATAAAA
xPATx
PT
Whatever
APAAATAA
输出样例：
YES
YES
YES
YES
NO
NO
NO
NO
*/ 
#include<stdio.h>
#include<string.h>
int main(void) {
	char s[1000];
	int len,i,j,k,l,n,a,b,c,flag,p1,p2,p3,p;
	scanf ("%d\n",&n);
	for (i=0;i<n;i++) {
		p=0;
		a=b=c=0;
		flag=0;
		p1=p2=p3=0;
		gets(s);
		len=strlen(s);
		for (j=0;j<len;j++) {
			if (s[j]!='P'&&s[j]!='A'&&s[j]!='T') {
				flag=1;
				break;
			}
			if (s[j]=='P') p1=1;
			if (s[j]=='A') p2=1;
			if (s[j]=='T') p3=1;
		}  
		if (flag==1||p1==0||p2==0||p3==0) {
			printf ("NO\n");
		}
		else {
			for (j=0;j<len;j++) {
			if (s[j]=='P')  break;
			 if (s[j]!='A') {
				p=1;
			}
			a++;
		}
		for (k=j+1;k<len;k++) {
			if (s[k]=='T') break;
			if (s[k]!='A') p=1;
			b++;
		}
		for (l=k+1;l<len;l++) {
			if (s[l]!='A') p=1;
			c++;
		}
		if (p==1||a*b!=c) printf ("NO\n");
		else  printf ("YES\n");
		}
		
	} 
	return 0;
} 
