/*
���ű���Ŀ ������ϰ ���������  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
����153��һ���ǳ��������������������ÿλ���ֵ������ͣ���153=1*1*1+5*5*5+3*3*3���������������������������λʮ��������
�����ʽ
��������С�����˳�����������������λʮ��������ÿ����ռһ�С� 
*/ 
#include<bits/stdc++.h>
using namespace std;
 
int panduan(int i);

int main(void)  {
    int i,y;
	for (i=100;i<=999;i++) {
		y=panduan(i);
		if (y==1)  printf ("%d\n",i);
	} 
    return 0;
} 
int panduan(int i) {
	int s=0,ans,d;
	ans=i;
	while(i!=0) {
		d=i%10;
		s=s+pow(d,3);
		i=i/10;
	}
if (s==ans)  return 1;
else return 0;
}

