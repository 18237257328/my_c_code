/*
���ű���Ŀ ������ϰ FJ���ַ���  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
����FJ��ɳ����д������һЩ�ַ�����
����A1 = ��A��
����A2 = ��ABA��
����A3 = ��ABACABA��
����A4 = ��ABACABADABACABA��
������ ��
���������ҳ����еĹ��ɲ�д���е�����AN��
�����ʽ
��������һ������N �� 26��
�����ʽ
�����������Ӧ���ַ���AN����һ�����з�����������в��ú��ж���Ŀո���С��س�����
��������
3
�������
ABACABA 
*/ 
#include<bits/stdc++.h>
using namespace std;
void zhuanhuan(int n);

int main()
{
	int n;
	scanf ("%d",&n);
	zhuanhuan(n);
    return 0;
}
void zhuanhuan(int n){
	if (n==1) {
	 printf ("A");
	 return;
	} 
	else {
		zhuanhuan(n-1);
		printf ("%c",'A'+n-1);
		zhuanhuan(n-1);
	}
}
