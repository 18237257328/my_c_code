/*
蓝桥杯题目 基础练习 报时助手  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　给定当前的时间，请用英文的读法将它读出来。
　　时间用时h和分m表示，在英文的读法中，读一个时间的方法是：
　　如果m为0，则将时读出来，然后加上“o'clock”，如3:00读作“three o'clock”。
　　如果m不为0，则将时读出来，然后将分读出来，如5:30读作“five thirty”。
　　时和分的读法使用的是英文数字的读法，其中0~20读作：
　　0:zero, 1: one, 2:two, 3:three, 4:four, 5:five, 6:six, 7:seven, 8:eight, 9:nine, 10:ten, 11:eleven, 12:twelve, 13:thirteen, 14:fourteen, 15:fifteen, 16:sixteen, 17:seventeen, 18:eighteen, 19:nineteen, 20:twenty。
　　30读作thirty，40读作forty，50读作fifty。
　　对于大于20小于60的数字，首先读整十的数，然后再加上个位数。如31首先读30再加1的读法，读作“thirty one”。
　　按上面的规则21:54读作“twenty one fifty four”，9:07读作“nine seven”，0:15读作“zero fifteen”。
输入格式
　　输入包含两个非负整数h和m，表示时间的时和分。非零的数字前没有前导0。h小于24，m小于60。
输出格式
　　输出时间时刻的英文。
样例输入
0 15
样例输出
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
