/*
���ű���Ŀ   ������ϰ 2n�ʺ�����  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
��������һ��n*n�����̣���������һЩλ�ò��ܷŻʺ�����Ҫ�������з���n���ڻʺ��n���׻ʺ�ʹ����������ڻʺ󶼲���ͬһ�С�ͬһ�л�ͬһ���Խ����ϣ�����������׻ʺ󶼲���ͬһ�С�ͬһ�л�ͬһ���Խ����ϡ����ܹ��ж����ַŷ���nС�ڵ���8��
�����ʽ
��������ĵ�һ��Ϊһ������n����ʾ���̵Ĵ�С��
����������n�У�ÿ��n��0��1�����������һ������Ϊ1����ʾ��Ӧ��λ�ÿ��ԷŻʺ����һ������Ϊ0����ʾ��Ӧ��λ�ò����ԷŻʺ�
�����ʽ
�������һ����������ʾ�ܹ��ж����ַŷ���
��������
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
�������
2
��������
4
1 0 1 1
1 1 1 1
1 1 1 1
1 1 1 1
�������
0 
*/ 
#include<stdio.h>

int check (int queen[],int line);
void hei(int line);
void bai(int line);

int chessb[100][100];
int b[100],h[100];
int count=0,n;

int main(void){
    int i,j;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
    	for (j=0;j<n;j++) {
    		scanf ("%d",&chessb[i][j]);
		}
	}
	hei(0);
	printf ("%d",count);
	return 0;
} 
void hei(int line) {
	int i;
	if (line==n) {
		bai(0);
	}
	else {
		for (i=0;i<n;i++) {
			if (chessb[line][i]==1) {
				h[line]=i;
				if (check(h,line)==1) {
					hei(line+1);
				}
			}
		}
	}
}
void bai(int line) {
	int i;
	if (line==n) {
		count++;
	}
	else {
		for (i=0;i<n;i++) {
			if (chessb[line][i]==1&&i!=h[line]) {
				b[line]=i;
				if (check(b,line)==1) {
					bai(line+1);
				}
			}
		}
	}
}
int check(int queen[],int line) {
	int i;
	for (i=0;i<line;i++) {
		if (queen[i]==queen[line]||abs(queen[i]-queen[line])==abs(i-line)) {
			return 0;
		}
	}
	return 1;
}

