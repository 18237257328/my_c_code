/*
���ű���Ŀ ������ϰ �ַ����Ա�  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
���������������ɴ�д��ĸ��Сд��ĸ��ɵ��ַ���(���Ƚ���1��10֮��)������֮��Ĺ�ϵ������4�����֮һ��
����1�������ַ������Ȳ��ȡ����� Beijing �� Hebei
����2�������ַ�������������ȣ�������Ӧλ���ϵ��ַ���ȫһ��(���ִ�Сд)������ Beijing �� Beijing
����3�������ַ���������ȣ���Ӧλ���ϵ��ַ����ڲ����ִ�Сд��ǰ���²��ܴﵽ��ȫһ�£�Ҳ����˵���������������2�������� beijing �� BEIjing
����4�������ַ���������ȣ����Ǽ�ʹ�ǲ����ִ�СдҲ����ʹ�������ַ���һ�¡����� Beijing �� Nanjing
��������ж�����������ַ���֮��Ĺ�ϵ�����������е���һ�࣬������������ı�š�
�����ʽ
�����������У�ÿ�ж���һ���ַ���
�����ʽ
��������һ�����֣������������ַ����Ĺ�ϵ���
��������
BEIjing
beiJing 
�������
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
