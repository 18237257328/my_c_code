/* 
���ű���Ŀ  �㷨ѵ�� 6-1 �ݹ������ʽϵ��ֵ  
ʱ�����ƣ�10.0s   �ڴ����ƣ�256.0MB
    
��������
C(�±���n���ϱ���m)={                      1                          (k==0||k==n);
                       C( �±���n-1���ϱ���k)+C(�±���n-1���ϱ���k-1)  (0<k<n);     }
                       �õݹ鷢����C(�±���n���ϱ���k)��
					    
��������
һ��������ĿҪ������뷶����
3 10
�������
120
����������������Ӧ�������

���ݹ�ģ��Լ��
��������������ÿһ�����ķ�Χ��
�������������int��ʾʱ��������� 
*/ 
#include<bits/stdc++.h>
using namespace std;

int ans(int k,int n);


int main(void) {
	int n,k,y;
    scanf ("%d %d",&k,&n);
    y=ans(k,n);
    printf ("%d",y);
	return 0;
}
int ans(int k,int n) {
	int result;
	if (k==0||k==n)  result=1;
	else {
		result=ans(k,n-1)+ans(k-1,n-1);
	}
	return result;
}
