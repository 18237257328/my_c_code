/*
���ű���Ŀ ������ϰ ���������  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
����123321��һ���ǳ����������������߶��ʹ��ұ߶���һ���ġ�
��������һ��������n�� �����������������λ����λʮ�������������λ����֮�͵���n ��
�����ʽ
��������һ�У�����һ��������n��
�����ʽ
��������С�����˳���������������������ÿ������ռһ�С�
��������
52
�������
899998
989989
998899
���ݹ�ģ��Լ��
����1<=n<=54�� 
*/ 
#include<bits/stdc++.h>
using namespace std;
 
int panduan1(int i);
int panduan2(int i);
int s1=0;
int s2=0;
int main(void)  {
   int i,y,n;
   scanf ("%d",&n);
   for (i=10000;i<=99999;i++) {
   	s1=0;
   	y=panduan1(i);
   	if (y==1&&s1==n)   printf ("%d\n",i);
   	
   }
  
   for (i=100000;i<=999999;i++) {
   	s2=0;
   	y=panduan2(i);
   	if (y==1&&s2==n){
   		printf ("%d\n",i);
   		
	   } 
   	
   }
    return 0;
} 
int panduan1(int i) {
	int j,ans[100],k=0,flag=0;
	for (j=4;j>=0;j--) {
		ans[j]=i%10;
		s1=s1+ans[j];
		i=i/10;
	}
	
	for (i=0;i<=1;i++) {
		if (ans[i]!=ans[4-i]) {
			flag=1;
			break;
		}
	}
	if (flag==1) return 0;
	else return 1;
}
int panduan2(int i) {
	int j,ans[100],k=0,flag=0;
	for (j=5;j>=0;j--) {
		ans[j]=i%10;
		s2=s2+ans[j];
		i=i/10;
	}
	for (i=0;i<=2;i++) {
		if (ans[i]!=ans[5-i]) {
			flag=1;
			break;
		}
	}
	if (flag==1) return 0;
	else return 1;
}

