/*
Pta��Ŀ1014 ����Ħ˹��Լ�� (20 ��)
����̽����Ħ˹�ӵ�һ����ֵ�����������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm������̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�������� 14:04����Ϊǰ�����ַ����е� 1 ����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ� 4 ����ĸ D�����������ģ��� 2 ����ͬ���ַ��� E �����ǵ� 5 ��Ӣ����ĸ������һ����ĵ� 14 ����ͷ������һ��� 0 �㵽 23 �������� 0 �� 9���Լ���д��ĸ A �� N ��ʾ�����������ַ����� 1 ����ͬ��Ӣ����ĸ s �����ڵ� 4 ��λ�ã��� 0 ��ʼ�������ϣ������ 4 ���ӡ��ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣

�����ʽ��
������ 4 ���зֱ���� 4 ���ǿա��������ո��ҳ��Ȳ����� 60 ���ַ�����

�����ʽ��
��һ�������Լ���ʱ�䣬��ʽΪ DAY HH:MM������ DAY ��ĳ���ڵ� 3 �ַ���д���� MON ��ʾ����һ��TUE ��ʾ���ڶ���WED ��ʾ��������THU ��ʾ�����ģ�FRI ��ʾ�����壬SAT ��ʾ��������SUN ��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣

����������
3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm
���������
THU 14:04
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
void zhuanhuan(char ch);
int main(void) {
	int i,len,t=0,flag=0;
	char str1[100],str2[100],str3[100],str4[100],ch1,ch2;
		scanf ("%s",str1);
		getchar();
		scanf ("%s",str2);
		getchar();
		
	  for (i=0;;i++) {
		if (str1[i]>='A'&&str1[i]<='G'&&str1[i]==str2[i]&&flag==0) {
			ch1=str1[i];
			flag=1;
			continue;
		}
		if (flag==1)  {
			if (((str1[i]>='0'&&str1[i]<='9')&&str1[i]==str2[i])||((str1[i]>='A'&&str1[i]<='N')&&str1[i]==str2[i])) {
				ch2=str1[i];
				break;
			}
			}
		}
		
	scanf ("%s",str3);
	getchar();
	scanf ("%s",str4);
	
	for (i=0;;i++) {
		    if (str3[i]==str4[i])  {
				if ((str3[i]>='A'&&str3[i]<='Z')||(str3[i]>='a'&&str3[i]<='z'))  break;
			}
			t++;
		} 
	zhuanhuan(ch1);
	if (ch2>='0'&&ch2<='9')  printf ("%02d:",ch2-'0');
	else  printf ("%02d:",(ch2-'A')+10);
	printf ("%02d",t);
	return 0;
}
void zhuanhuan(char ch) {
	if (ch=='A')  printf ("MON ");
	if (ch=='B')  printf ("TUE ");
	if (ch=='C')  printf ("WED ");
	if (ch=='D')  printf ("THU ");
	if (ch=='E')  printf ("FRI ");
	if (ch=='F')  printf ("SAT ");
	if (ch=='G')  printf ("SUN ");
}
