/*
���ű���Ŀ  ������ϰ ���������  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
����ƽ�������������Σ����ǵı�ƽ����ֱ������ϵ��X���Y�ᡣ����ÿ�����Σ����Ǹ�������һ����Զ�������꣬����������������εĽ��������
�����ʽ
����������������У�ÿ������һ�����Ρ�
������ÿ���У��������ε�һ����Զ�������꣬ÿ��������궼����������ֵ������10^7��ʵ����ʾ��
�����ʽ
�������������һ��ʵ����Ϊ���������������С������λ��
��������
1 1 3 3
2 2 4 4
�������
1.00
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	double x1,y1,x2,y2,x3,y3,x4,y4;
	double m1,m2,n1,n2;
	scanf ("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	scanf ("%lf %lf %lf %lf",&x3,&y3,&x4,&y4);
	m1=max(min(x1,x2),min(x3,x4));
	n1=max(min(y1,y2),min(y3,y4));
	
	m2=min(max(x1,x2),max(x3,x4));
	n2=min(max(y1,y2),max(y3,y4));
	if (m2>m1&&n2>n1) {
		printf ("%.2f",(m2-m1)*(n2-n1));
	}
	else printf ("0.00");
	return 0;
} 