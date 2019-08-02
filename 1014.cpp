/*
Pta题目1014 福尔摩斯的约会 (20 分)
大侦探福尔摩斯接到一张奇怪的字条：我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm。大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间星期四 14:04，因为前面两字符串中第 1 对相同的大写英文字母（大小写有区分）是第 4 个字母 D，代表星期四；第 2 对相同的字符是 E ，那是第 5 个英文字母，代表一天里的第 14 个钟头（于是一天的 0 点到 23 点由数字 0 到 9、以及大写字母 A 到 N 表示）；后面两字符串第 1 对相同的英文字母 s 出现在第 4 个位置（从 0 开始计数）上，代表第 4 分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。

输入格式：
输入在 4 行中分别给出 4 个非空、不包含空格、且长度不超过 60 的字符串。

输出格式：
在一行中输出约会的时间，格式为 DAY HH:MM，其中 DAY 是某星期的 3 字符缩写，即 MON 表示星期一，TUE 表示星期二，WED 表示星期三，THU 表示星期四，FRI 表示星期五，SAT 表示星期六，SUN 表示星期日。题目输入保证每个测试存在唯一解。

输入样例：
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm
输出样例：
THU 14:04
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
void zhuanhuan(char ch);
int main(void) {
	int i,len,t=0,flag=0;
	char str1[100],str2[100],str3[100],str4[100],ch1,ch2;
		scanf ("%s",str1);
		getchar();
		scanf ("%s",str2);
		getchar();
		
	  for (i=0;;i++) {
		if (str1[i]>='A'&&str1[i]<='G'&&str1[i]==str2[i]&&flag==0) {
			ch1=str1[i];
			flag=1;
			continue;
		}
		if (flag==1)  {
			if (((str1[i]>='0'&&str1[i]<='9')&&str1[i]==str2[i])||((str1[i]>='A'&&str1[i]<='N')&&str1[i]==str2[i])) {
				ch2=str1[i];
				break;
			}
			}
		}
		
	scanf ("%s",str3);
	getchar();
	scanf ("%s",str4);
	
	for (i=0;;i++) {
		    if (str3[i]==str4[i])  {
				if ((str3[i]>='A'&&str3[i]<='Z')||(str3[i]>='a'&&str3[i]<='z'))  break;
			}
			t++;
		} 
	zhuanhuan(ch1);
	if (ch2>='0'&&ch2<='9')  printf ("%02d:",ch2-'0');
	else  printf ("%02d:",(ch2-'A')+10);
	printf ("%02d",t);
	return 0;
}
void zhuanhuan(char ch) {
	if (ch=='A')  printf ("MON ");
	if (ch=='B')  printf ("TUE ");
	if (ch=='C')  printf ("WED ");
	if (ch=='D')  printf ("THU ");
	if (ch=='E')  printf ("FRI ");
	if (ch=='F')  printf ("SAT ");
	if (ch=='G')  printf ("SUN ");
}
