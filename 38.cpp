/*
���ű���Ŀ ������ϰ ��ĸͼ��  
ʱ�����ƣ�1.0s   �ڴ����ƣ�256.0MB
      
��������
������ĸ�������һЩ������ͼ�Σ����������һ�����ӣ�

ABCDEFG

BABCDEF

CBABCDE

DCBABCD

EDCBABC

����һ��5��7�е�ͼ�Σ����ҳ����ͼ�εĹ��ɣ������һ��n��m�е�ͼ�Ρ�

�����ʽ
����һ�У�������������n��m���ֱ��ʾ��Ҫ�����ͼ�ε�������������
�����ʽ
���n�У�ÿ��m���ַ���Ϊ���ͼ�Ρ�
��������
5 7
�������
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
���ݹ�ģ��Լ��
1 <= n, m <= 26�� 
*/ 
#include<stdio.h>

int main(void) {
	int n,m,i,j,flag=0;
	char ans[100][100];
	scanf ("%d %d",&n,&m);
	for (j=0;j<m;j++) {
		ans[0][j]='A'+j;
	}
	
	for (j=0;j<m;j++) {
		flag=0;
		for (i=1;i<n;i++) {
		if (ans[i-1][j]>'A'&&flag==0)	 ans[i][j]=ans[i-1][j]-1;
		else  if (ans[i-1][j]=='A'||flag==1) {
			ans[i][j]=ans[i-1][j]+1;
			flag=1;
		}

		}
	}
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			printf ("%c",ans[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
