/*
���ű���Ŀ ������ϰ Sine֮��  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
�������FJΪ������ţ�ǿ�������ѧ�����Σ�FJ֪����Ҫѧ�����ſΣ�������һ���õ����Ǻ�����������������׼������ţ����һ����Sine֮�衱����Ϸ��Ԣ�����֣������ţ�ǵļ���������
����������
����An=sin(1�Csin(2+sin(3�Csin(4+...sin(n))...)
����Sn=(...(A1+n)A2+n-1)A3+...+2)An+1
����FJ������ţ�Ǽ���Sn��ֵ���������FJ��ӡ��Sn���������ʽ���Է�����ţ�����⡣
�����ʽ
��������һ������N<201��
�����ʽ
�����������Ӧ�ı��ʽSn����һ�����з�����������в��ú��ж���Ŀո���С��س�����
��������
3
�������
((sin(1)+3)sin(1�Csin(2))+2)sin(1�Csin(2+sin(3)))+1 
*/ 
#include<bits/stdc++.h>
using namespace std;

void an(int n,int i);
void sn(int n,int i);
int flag=1;
int main(void) {
    int i,n;
    scanf ("%d",&n);
    for (i=0;i<n-1;i++) {
    	printf ("(");
	}
    sn(n,1);
	return 0;
} 
void an(int n,int i) {
	flag=-flag;
	if (i==n) {
		printf ("sin(%d",n);
		for (i=0;i<n;i++) {
			printf (")");
		}
		return;
	}
	else {
		printf ("sin(%d",i);
		if (flag<0) printf ("-");
		else  printf ("+"); 
		//printf ("flag<0?'-':'+'");
	}	
	an(n,i+1);
}
void sn(int n,int i) {
	if (i==n) {
		flag=1;
		an(n,1);
		printf ("+1");
		return;
	}
	else {
		flag=1;
		an(i,1);
		printf ("+%d)",n+1-i);
		sn(n,i+1);
	}
}
