/*���� 2056: ��ŵ��

��Ŀ����
��ŵ����һ�ֹ��ϵ���Ϸ��һ��3�����ӣ����Ϊ1,2,3
1�������дӴ�Сһ��n�����ӡ�ÿ���ƶ����Ϸ���һ�����ӣ������ƶ������������ӡ�
�κ�һ�����ӣ������ܵ��ڱ�����С�����ӵ��Ϸ���������Ӵ�1�����ӣ�ȫ���ƶ���3�����ӡ�
��ʼ���ƶ������������ڣ�������n�����ӣ���������һ������̴����ƶ��Ĺ��̡�

���룺һ������n����ʾ���ӵ�������n<=10��
�������������С�
ÿ�β��������һ�С������Move x from x to x���ĸ�ʽ����С���ӵı��Ϊ1��������ӵı��Ϊn��

��������
 4
 
�������
 Move 1 from 1 to 2
 Move 2 from 1 to 3
 Move 1 from 2 to 3
 Move 3 from 1 to 2
 Move 1 from 3 to 1
 Move 2 from 3 to 2
 Move 1 from 1 to 2
 Move 4 from 1 to 3
 Move 1 from 2 to 3
 Move 2 from 2 to 1
 Move 1 from 3 to 1
 Move 3 from 2 to 3
 Move 1 from 1 to 2
 Move 2 from 1 to 3
 Move 1 from 2 to 3*/

#include<bits/stdc++.h>
using namespace std;
void hanio(int n,char a,char b,char c);

int main(){
	int n;
	cin>>n;
	hanio(n,'1','3','2');
    return 0;
}
void hanio(int n,char a,char b,char c){
	if(n==1) {
		printf("Move %d from %c to %c\n",n,a,b);
		return;
	}
	else {
		hanio(n-1,a,c,b);
		//printf("%d %c-->%c\n",n,a,b);
		printf("Move %d from %c to %c\n",n,a,b);
		hanio(n-1,c,b,a);
	}
}
