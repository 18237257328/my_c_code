/*
Pta��Ŀ1093 �ַ���A+B (20 ��)
���������ַ��� A �� B������Ҫ������� A+B���������ַ����Ĳ�����Ҫ������� A������� B�����ظ����ַ����뱻�޳���

�����ʽ��
�����������зֱ���� A �� B����Ϊ���Ȳ����� 10
?6
?? �ġ��ɿɼ� ASCII �ַ� (����ֵΪ32~126)�Ϳո���ɵġ��ɻس���ʶ�����ķǿ��ַ�����

�����ʽ��
��һ�����������Ҫ��� A �� B �ĺ͡�

����������
This is a sample test
to show you_How it works
���������
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

