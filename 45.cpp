/*
���ű���Ŀ  ������ϰ ʮ������ת�˽���  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
��������n��ʮ��������������������Ƕ�Ӧ�İ˽�������

�����ʽ
��������ĵ�һ��Ϊһ��������n ��1<=n<=10����
����������n�У�ÿ��һ����0~9����д��ĸA~F��ɵ��ַ�������ʾҪת����ʮ��������������ÿ��ʮ�����������Ȳ�����100000��

�����ʽ
�������n�У�ÿ��Ϊ�����Ӧ�İ˽�����������

������ע�⡿
���������ʮ��������������ǰ��0������012A��
��������İ˽�����Ҳ������ǰ��0��

��������
����2
����39
����123ABC

�������
����71
����4435274

��������ʾ��
�����Ƚ�ʮ��������ת����ĳ������������ĳ������ת���ɰ˽��� 
*/ 
#include<bits/stdc++.h>
using namespace std;

int zhuanhuan(char ch);

int main(void) {
	int len,i,j,num,n,ans1[900000],k1,ans2[90000],k2,count,flag;
	int cnt,x;
	char s[900000];
	scanf ("%d",&n);
	for (i=0;i<n;i++) {
		k1=0;
		k2=0;
		scanf("%s",s);
		len=strlen(s);
		for (j=len-1;j>=0;j--) {
			num=zhuanhuan(s[j]);
			count=4;
			while(count--) {
				ans1[k1++]=num%2;
				num=num/2;
			} 
		}
		cnt=1;
		x=0;
		for (j=0;j<k1;j++) {
			if (cnt==4||j==k1-1) {
				x=x+ans1[j]*cnt;
				ans2[k2++]=x;
				cnt=1;
				x=0;
			}
			else {
				x=x+ans1[j]*cnt;
				cnt=cnt*2;
			}
		}
		flag=0;
		for (j=k2-1;j>=0;j--) {
			if (ans2[j]!=0&&flag==0) {
				flag=1;
				printf ("%d",ans2[j]);
			}
			else if (flag==1) {
				printf ("%d",ans2[j]);
			}
		}
		printf ("\n");
	}
	return 0;
}
int zhuanhuan(char ch) {
	if (ch>='0'&&ch<='9') {
		return ch-'0';
	}
	else {
		return 10+ch-'A';
	}
}
