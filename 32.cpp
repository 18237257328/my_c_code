/*
���ű���Ŀ ������ϰ ��ʱ����  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
����������ǰ��ʱ�䣬����Ӣ�ĵĶ���������������
����ʱ����ʱh�ͷ�m��ʾ����Ӣ�ĵĶ����У���һ��ʱ��ķ����ǣ�
�������mΪ0����ʱ��������Ȼ����ϡ�o'clock������3:00������three o'clock����
�������m��Ϊ0����ʱ��������Ȼ�󽫷ֶ���������5:30������five thirty����
����ʱ�ͷֵĶ���ʹ�õ���Ӣ�����ֵĶ���������0~20������
����0:zero, 1: one, 2:two, 3:three, 4:four, 5:five, 6:six, 7:seven, 8:eight, 9:nine, 10:ten, 11:eleven, 12:twelve, 13:thirteen, 14:fourteen, 15:fifteen, 16:sixteen, 17:seventeen, 18:eighteen, 19:nineteen, 20:twenty��
����30����thirty��40����forty��50����fifty��
�������ڴ���20С��60�����֣����ȶ���ʮ������Ȼ���ټ��ϸ�λ������31���ȶ�30�ټ�1�Ķ�����������thirty one����
����������Ĺ���21:54������twenty one fifty four����9:07������nine seven����0:15������zero fifteen����
�����ʽ
����������������Ǹ�����h��m����ʾʱ���ʱ�ͷ֡����������ǰû��ǰ��0��hС��24��mС��60��
�����ʽ
�������ʱ��ʱ�̵�Ӣ�ġ�
��������
0 15
�������
zero fifteen 
*/ 
#include<bits/stdc++.h>
using namespace std;
void print(int n);
int t=0;
int main(void){
	int n,m;
	scanf ("%d %d",&n,&m);
	if (m==0)  {
		print(n);
		printf(" o'clock");
		return 0;
	}
    if (n>=0&&n<=20||n==30||n==40||n==50) {
    	print(n);
	}
	else {
		print((n/10)*10);
		print(n%10);
	}
	if (m>=0&&m<=20||m==30||m==40||m==50) {
    	print(m);
	}
	else {
		print((m/10)*10);
		print(m%10);
	}
	return 0;
}
void print(int n) {
	t++;
	if (t!=1) printf (" ");
	if (n==0)  printf("zero");
	if (n==1)  printf("one");
	if (n==2)  printf("two");
	if (n==3)  printf("three");
	if (n==4)  printf("four");
	if (n==5)  printf("five");
	if (n==6)  printf("six");
	if (n==7)  printf("seven");
	if (n==8)  printf("eight");
	if (n==9)  printf("nine");
	if (n==10)  printf("ten");
	if (n==11)  printf("eleven");
	if (n==12)  printf("twelve");
	if (n==13)  printf("thirteen");
	if (n==14)  printf("fourteen");
	if (n==15)  printf("fifteen");
	if (n==16)  printf("sixteen");
	if (n==17)  printf("seventeen");
	if (n==18)  printf("eighteen");
	if (n==19)  printf("nineteen");
	if (n==20)  printf("twenty");
	if (n==30)  printf("thirty");
	if (n==40)  printf("forty");
	if (n==50)  printf("fifty");
	
}
