/*
������Ŀ   ������ϰ �ֽ�������  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
�����������[a,b]�������������������ֽ⡣
�����ʽ
����������������a��b��
�����ʽ
����ÿ�����һ�����ķֽ⣬����k=a1*a2*a3...(a1<=a2<=a3...��kҲ�Ǵ�С�����)(����ɿ�����)
��������
3 10
�������
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
��ʾ
������ɸ������������Ȼ���ٷֽ⡣
���ݹ�ģ��Լ��
����2<=a<=b<=10000
*/ 
#include<bits/stdc++.h>
using namespace std;

void print(int n);

int main(void) {
	int a,b,i;
	scanf ("%d %d",&a,&b);
	for (i=a;i<=b;i++) {
		print(i);
		printf ("\n");
	}
	return 0;
} 
void print(int n) {
	int i,t=0;
	printf ("%d",n);
	for(i=2;i<=n;i++) {
		while(1) {
			if (n%i==0){
				t++;
				if (t==1) printf ("=");
				else printf ("*");
				printf ("%d",i);
				n=n/i;
			}
			else  break;
		}
	} 
}
