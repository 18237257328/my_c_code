/*
���ű���Ŀ  �㷨ѵ�� ò�ƻ�ѧ  
ʱ�����ƣ�1.0s   �ڴ����ƣ�256.0MB
    
��������
����������a,b,c����ԭ�ϣ�������ǰ�x:y:z��ϣ����ܲ���һ���������Ʒd��
������Ȼ��һ��ֻ����һ��d����a,b,c������һ����x:y:z
�������ڸ���3�ֿɹ�ѡ�����Ʒ:
����ÿ����Ʒ������a,b,c��һ��������ϳɵģ�������ٵ���Ʒ����ʹ�������ܴճ�������d��Ʒ�������������ָ���߸������ܺ����٣�
�����ʽ
������һ��������������ʾd����ȣ�x,y,z��
�������������У���ʾ������Ʒ����ȣ�ÿ������������<=10000����
�����ʽ
�����ĸ��������ֱ��ʾ��������Ʒ������ǰ����a,b,c,d�ĸ�����d����a,b,c��õģ�
����Ŀ���<=10000
����������������������ķ��������NONE
��������
3 4 5
1 2 3
3 7 1
2 1 2
�������
8 1 5 7 
*/ 
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;

ll g[4][4];
ll a,b,c;

ll gcd(ll x,ll y)   //������x,y�����Լ���ķ��� 
{
	/*if(y==0) return x;
	else return gcd(y,x%y);*/
	
	/*if(x==0)  return y;
	else if (y==0) return x;
    long long int i,minn;
	minn=min(x,y);
	for (i=minn;i>0;i--) {
		if (x%i==0&&y%i==0) {
			return i;
		}
	} */
	long long int t;
	if (x==0) return y;
	if (y==0) return x;
	if (x<y) {
		t=x;
		x=y;
		y=t;
	}
	while((x%y)!=0) {
		t=y;
		y=x%y;
		x=t;
	}
	return y;
}

int main()
{
	scanf("%lld%lld%lld",&a,&b,&c);
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			scanf("%d",&g[i][j]);
		}
	}
	
	ll A=a*g[1][2]-b*g[1][1];ll B=a*g[2][2]-b*g[2][1];ll C=a*g[3][2]-b*g[3][1];
	ll D=b*g[1][3]-c*g[1][2];ll E=b*g[2][3]-c*g[2][2];ll F=b*g[3][3]-c*g[3][2];
	
	ll x=-B*F+C*E;ll y=-D*C+A*F;ll z=-A*E+B*D;
	
	if(x<0)
	{
		x=-x;y=-y;z=-z;
	}
	
	if(x<0||y<0||z<0)
	{
		cout<<"NONE"<<endl;
		return 0;
	}
	//printf ("%lld %lld %lld* \n",x,y,z);
	ll temp=gcd(x,y);
	//printf ("%lld ",temp);
	temp=gcd(temp,z);
	//printf ("%lld ",temp); 
	
	
	printf("%lld %lld %lld %lld\n",x/temp,y/temp,z/temp,(x*g[1][1]+y*g[2][1]+z*g[3][1])/(a*temp));
}

