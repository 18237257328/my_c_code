/*
Pta��Ŀ1004 �ɼ����� (20 ��)
���� n��>0����ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�

�����ʽ��
ÿ������������� 1 ��������������ʽΪ

�� 1 �У������� n
�� 2 �У��� 1 ��ѧ�������� ѧ�� �ɼ�
�� 3 �У��� 2 ��ѧ�������� ѧ�� �ɼ�
  ... ... ...
�� n+1 �У��� n ��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������ 10 ���ַ����ַ������ɼ�Ϊ 0 �� 100 ֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�

�����ʽ��
��ÿ������������� 2 �У��� 1 ���ǳɼ����ѧ����������ѧ�ţ��� 2 ���ǳɼ����ѧ����������ѧ�ţ��ַ������� 1 �ո�

����������
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
���������
Mike CS991301
Joe Math990112 
*/
#include<stdio.h>
#include<string.h>
struct Node{
	char name[100];
	char number[100];
	int grade;
}Tel[10000],item;

int main(void) {
    int n,i,j,max;
    scanf ("%d",&n);
    getchar();
    for (i=0;i<n;i++) {
    	scanf ("%s %s %d",Tel[i].name,Tel[i].number,&Tel[i].grade);
	}
		for (i=0;i<n-1;i++) {
		max=i;
		for (j=i+1;j<n;j++) {
			if (Tel[j].grade>Tel[max].grade) {
				max=j;
			}
		}
		item=Tel[max];
		Tel[max]=Tel[i];
		Tel[i]=item; 
	}
	printf ("%s %s\n",Tel[0].name,Tel[0].number);
	printf ("%s %s\n",Tel[n-1].name,Tel[n-1].number);
		
	return 0;
}
