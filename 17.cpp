/*
���ű���Ŀ  �㷨ѵ�� s01��  
ʱ�����ƣ�1.0s   �ڴ����ƣ�256.0MB
    
��������
����s01����ʼΪ"0"
���������·�ʽ�任
����0��1��1��01
�����ʽ
����1������(0~19)
�����ʽ
����n�α任��s01��
��������
3
�������
101
���ݹ�ģ��Լ��
����0~19 
*/ 
#include<bits/stdc++.h>
using namespace std;

string ans(int n);

int main(void){
	int n;
	scanf ("%d",&n);
	cout<<ans(n);
	//cout << ans(n) << endl;
	//printf ("%s",ans(n));
	return 0;
}
string ans(int n){
	if (n==0) return "0";
	else if (n==1) return "1";
	else  return ans(n-2)+ans(n-1);
}
