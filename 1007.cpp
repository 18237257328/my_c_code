/*
Pta��Ŀ1007 �����Բ��� (20 ��)
�����Ƕ���dn Ϊ��dn =pn+1-pn������pi �ǵ�i����������Ȼ��d1=1���Ҷ���n>1��dn��ż�����������Բ��롱��Ϊ�����������������Ҳ�Ϊ2����������
�ָ�������������N(<10^5)������㲻����N���������������Եĸ�����
�����ʽ:
������һ�и���������N��

�����ʽ:
��һ�������������N���������������Եĸ�����

��������:
20
�������:
4
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int x);

int main(void) {
	int n,i,a[10000],k=0,t=0;
	scanf ("%d",&n);
	for (i=1;i<=n;i++) {
		if (prime(i)==1) a[k++]=i;
	}
	for (i=k-1;i>=1;i--) {
		if (a[i]-a[i-1]==2) t++;
	}
	printf ("%d",t);
	return 0;
}
int prime(int x) {
	int flag=0,i;
	if (x<=0) return 0;
	if (x==1) return 1;
	else {
		for (i=2;i<=sqrt(x);i++) {
			if (x%i==0) {
				flag=1;
				break;
			}
		}
		if(flag==0)   return 1;
		else   return 0;
	}
}
