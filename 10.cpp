/*
蓝桥杯题目  算法训练 表达式计算  
时间限制：1.0s   内存限制：256.0MB
    
问题描述
　　输入一个只包含加减乖除和括号的合法表达式，求表达式的值。其中除表示整除。
输入格式
　　输入一行，包含一个表达式。
输出格式
　　输出这个表达式的值。
样例输入
1-2+3*(4-5)
样例输出
-4
数据规模和约定
　　表达式长度不超过100，表达式运算合法且运算过程都在int内进行。 
*/
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int bijiao(char ch);

int main(void){
	stack <int> S1;
	stack <char> S2;
	S2.push('#');
	int i=0,len,sum,x,y,z;
	char a[100],ch;
	scanf ("%s",a);
	len=strlen(a);
	while(i<len) {
		
		if (a[i]>='0'&&a[i]<='9') {
			sum=0;
			while(a[i]>='0'&&a[i]<='9') {
				sum=sum*10+(a[i]-'0');
	            i++;
			}
			S1.push(sum);
		}
		
		else if (a[i]=='(') {
			S2.push('(');
			i++;
		}
		
		else if (a[i]==')'){
			while(S2.top()!='(') {
				x=S1.top();
				S1.pop();
				y=S1.top();
				S1.pop();
				ch=S2.top();
				S2.pop();
				if (ch=='+') S1.push(y+x);
				else if (ch=='-') S1.push(y-x);
				else if (ch=='*') S1.push(y*x);
				else if (ch=='/') S1.push(y/x); 
			}
			S2.pop();
			i++;
		}
		
		else if (bijiao(a[i])>bijiao(S2.top())){
			S2.push(a[i]);
			i++;
		}
		
		else if (bijiao(a[i])<=bijiao(S2.top())){
			while(bijiao(a[i])<=bijiao(S2.top())) {
				x=S1.top();
				S1.pop();
				y=S1.top();
				S1.pop();
				ch=S2.top();
				S2.pop();
				if (ch=='+') S1.push(y+x);
				else if (ch=='-') S1.push(y-x);
				else if (ch=='*') S1.push(y*x);
				else if (ch=='/') S1.push(y/x);
			}
			S2.push(a[i]);
			i++;
		}
	}
	while(S2.top()!='#'){
		x=S1.top();
		S1.pop();
		y=S1.top();
		S1.pop();
		ch=S2.top();
		S2.pop();
		if (ch=='+') S1.push(y+x);
		else if (ch=='-') S1.push(y-x);
		else if (ch=='*') S1.push(y*x);
		else if (ch=='/') S1.push(y/x);
		
	}
	printf ("%d",S1.top());
	return 0;
}
int bijiao(char ch){
		if (ch=='+'||ch=='-') return 1;
	    else if (ch=='*'||ch=='/') return 2;
	    else if (ch=='#') return 0;
	    else if (ch=='(') return 0;
}
