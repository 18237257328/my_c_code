/*
���ű���Ŀ   ������ϰ ��������Ԥ��  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
������˵����������и��ָ��������Ӻ��ڹ꣬�����о����֣����е����Ӻ��ڹ궼��һ����ͬ���ص㡪��ϲ�����ܡ����������ϸ������䶼�����ڷ������ڹ�����ӵı�����С���Դ˺ܸ���Ȥ�����Ǿ����о���ͬ���Ӻ��ڹ�����ܡ������֣�������Ȼ�ܱ��ڹ�죬��������������֪��ë���������������裬���������ڹ�ı����У�һ����һ����������ӷ����Լ�����t�׻����ϣ����Ǿͻ�ͣ������Ϣs�롣���ڲ�ͬ�����ӣ�t��s����ֵ�ǲ�ͬ�ģ��������е��ڹ�ȴ��һ�¡������ǲ����յ����ֹͣ��
����Ȼ����Щ�����൱������ȫ�̹ۿ���ķѴ���ʱ�䣬��С������ֻҪ��ÿ��������ʼ���¼�����Ӻ��ڹ�����ݡ������ӵ��ٶ�v1����ʾÿ����������v1�ף����ڹ���ٶ�v2���Լ����Ӷ�Ӧ��t��sֵ���Լ������ĳ���l��������Ԥ��������Ľ��������С������������ͨ���ֹ������Ʋ�������Ľ�����������ҵ����㡪���廪��ѧ�����ϵ�ĸ߲��������������������дһ�����򣬶��������һ������������v1��v2��t��s��l��Ԥ��ó������Ľ����
�����ʽ
��������ֻ��һ�У������ÿո���������������v1��v2��t��s��l������(v1,v2<=100;t<=300;s<=10;l<=10000��Ϊv1,v2�Ĺ�����)
�����ʽ
��������������У���һ����������������һ����д��ĸ��T����R����D�����ֱ��ʾ�ڹ��ʤ�����ӻ�ʤ����������ͬʱ�����յ㡣
�����ڶ������һ������������ʾ��ʤ�ߣ�����˫��ͬʱ�������յ����ķѵ�ʱ�䣨��������
��������
10 5 5 2 20
�������
D
4
��������
10 5 5 1 20
�������
R
3
��������
10 5 5 3 20
�������
T
4 
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int v1,v2,s,t,l,g=0,s1=0,s2=0,flag;
	scanf ("%d %d %d %d %d",&v1,&v2,&t,&s,&l);
	
	while(1) {
		if (s1>=l||s2>=l){
			break;
		}
		if (s1-s2>=t) {
			if (s2+s*v2<l) {
				g=g+s;
			s2=s2+(s*v2);
			}
			else {
				g=g+(l-s2)/v2;
				s2=l;
			}
		}
		else {
			g++;
			s1=s1+v1;
			s2=s2+v2;
		}
	}
	if (s1>=l&&s2<l){
		 printf ("R\n%d",g);
	} 
	if (s1<l&&s2>=l) {
		 printf ("T\n%d",g);
	}
	if (s1>=l&&s2>=l){
		 printf ("D\n%d",g);
	} 
	return 0;
}