/*
���ű���Ŀ �㷨ѵ�� ��ɫ������  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
    

��������
������Щ�����˱Ƚ����ţ����ĳ���µ�13�������������壬���Ǿͻ���ò�̫�������ù��˵�˵�������ǡ����²��ˡ��������дһ������ͳ�Ƴ���ĳ���ض�������У������˶��ٴμ���13����������������Σ��԰�������������ѽ�����⡣
����˵������1��һ����365�죬������366�죬��ν���꣬���ܱ�4�����Ҳ��ܱ�100��������ݣ����Ǽ��ܱ�100����Ҳ�ܱ�400��������ݣ���2����֪1998��1��1���������ģ��û��������ݿ϶����ڻ����1998�ꡣ
���������ʽ������ֻ��һ�У���ĳ���ض�����ݣ����ڻ����1998�꣩��
���������ʽ�����ֻ��һ�У�������һ���У������˶��ٴμ���13����������������Ρ�
�����������
��������
1998
�������
3 
*/ 
#include<bits/stdc++.h>  
using namespace std;  
int isrunnian(int n);
void panduan1(int n);
void panduan2(int n);

int main()  
{  
    int n,i,y;
    scanf ("%d",&n);
    y=isrunnian(n);
    if (y==1) {
    	panduan1(n);
	}
	else panduan2(n);
    return 0;  
}  
int isrunnian(int n){
	if ((n%4==0&&n%100!=0)||(n%100==0&&n%400==0)) {
		return 1;
	}
	else return 0;
}
void panduan1(int n){
	int day[15];
	int i,j,t=0,s;
	for (i=1;i<=12;i++) {
	    if (i==2) day[i]=29;
		else if (i==1||i==3||i==5||i==7||i==8||i==10||i==12) day[i]=31;
		else day[i]=30;
	}
	for (i=1;i<=12;i++) {
		s=0;
		if (n==1998) s=0;
		else {
			for (j=1998;j<n;j++) {
				if (isrunnian(j)==1) s=s+366;
				else s=s+365;
			}
		}
		
		for(j=1;j<i;j++) {
			s=s+day[j];
		}
		s=s+13;
		//printf ("%d$ %d ",s,(s-2)%7);
		if ((s-2)%7==0) {
			//printf ("%d* ",i);
			t++;
		}
		//printf ("\n");
	}
	printf ("%d",t);
}
void panduan2(int n){
	int day[15];
	int i,j,t=0,s;
	for (i=1;i<=12;i++) {
	    if (i==2) day[i]=28;
		else if (i==1||i==3||i==5||i==7||i==8||i==10||i==12) day[i]=31;
		else day[i]=30;
	}
	for (i=1;i<=12;i++) {
		s=0;
		if (n==1998) s=0; 
		else {
			for (j=1998;j<n;j++) {
				if (isrunnian(j)==1) s=s+366;
				else s=s+365;
			}
		}
		
		for(j=1;j<i;j++) {
			s=s+day[j];
		}
		s=s+13;
		//printf ("%d$ %d ",s,(s-2)%7);
		if ((s-2)%7==0) {
			//printf ("%d* ",i);
			t++;
		}
		//printf ("\n");
	}
	printf ("%d",t);
}
