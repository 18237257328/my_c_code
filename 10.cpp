/*
���ű���Ŀ  �㷨ѵ�� ���ʽ����  
ʱ�����ƣ�1.0s   �ڴ����ƣ�256.0MB
    
��������
��������һ��ֻ�����Ӽ��Գ������ŵĺϷ����ʽ������ʽ��ֵ�����г���ʾ������
�����ʽ
��������һ�У�����һ�����ʽ��
�����ʽ
�������������ʽ��ֵ��
��������
1-2+3*(4-5)
�������
-4
���ݹ�ģ��Լ��
�������ʽ���Ȳ�����100�����ʽ����Ϸ���������̶���int�ڽ��С� 
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
