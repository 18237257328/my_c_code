/*
Pta��Ŀ1002 д������� (20 ��)
����һ�������� n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��
ÿ������������� 1 ��������������������Ȼ�� n ��ֵ�����ﱣ֤ n С�� 10^100 ��

�����ʽ��
��һ������� n �ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ��� 1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu 
*/ 
#include<stdio.h>
#include<string.h>
void zhuanhua(int x);

int t=0;
int main(void) {
    int i,s=0,len,b[100],k=0,d;
    char a[100];
    scanf ("%s",a);
    len=strlen(a);
    for (i=0;i<len;i++) {
    	s = s+a[i]-'0';
	}
	while(s!=0) {
		d=s%10;
		s=s/10;
		b[k++]=d;
	}
	for (i=k-1;i>=0;i--) {
		zhuanhua(b[i]);
	}
	return 0;
}
void zhuanhua(int x) {
	t++;
	if (t!=1) printf (" ");
	if (x==0)  printf ("ling");
	if (x==1)  printf ("yi");
	if (x==2)  printf ("er");
	if (x==3)  printf ("san");
	if (x==4)  printf ("si");
	if (x==5)  printf ("wu");
	if (x==6)  printf ("liu");
	if (x==7)  printf ("qi");
	if (x==8)  printf ("ba");
	if (x==9)  printf ("jiu");
}
