/*
Pta题目1093 字符串A+B (20 分)
给定两个字符串 A 和 B，本题要求你输出 A+B，即两个字符串的并集。要求先输出 A，再输出 B，但重复的字符必须被剔除。

输入格式：
输入在两行中分别给出 A 和 B，均为长度不超过 10
?6
?? 的、由可见 ASCII 字符 (即码值为32~126)和空格组成的、由回车标识结束的非空字符串。

输出格式：
在一行中输出题面要求的 A 和 B 的和。

输入样例：
This is a sample test
to show you_How it works
输出样例：
This ampletowyu_Hrk 
*/
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int ans[10000]={0},i;
	string a,b,c;
	getline(cin,a);
	getline(cin,b);
	c=a+b;
	for (i=0;i<c.length();i++) {
		if (ans[c[i]]==0) {
			cout<<c[i];
			ans[c[i]]++;
		}
		
		//printf ("%c",c[i]);
	}
	
	return 0;
}

