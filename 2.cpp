/*
蓝桥杯题目  算法训练 貌似化学  
时间限制：1.0s   内存限制：256.0MB
    
问题描述
　　现在有a,b,c三种原料，如果他们按x:y:z混合，就能产生一种神奇的物品d。
　　当然不一定只产生一份d，但a,b,c的最简比一定是x:y:z
　　现在给你3种可供选择的物品:
　　每个物品都是由a,b,c以一定比例组合成的，求出最少的物品数，使得他们能凑出整数个d物品（这里的最少是指三者个数的总和最少）
输入格式
　　第一行三个整数，表示d的配比（x,y,z）
　　接下来三行，表示三种物品的配比，每行三个整数（<=10000）。
输出格式
　　四个整数，分别表示在最少物品总数的前提下a,b,c,d的个数（d是由a,b,c配得的）
　　目标答案<=10000
　　如果不存在满足条件的方案，输出NONE
样例输入
3 4 5
1 2 3
3 7 1
2 1 2
样例输出
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

ll gcd(ll x,ll y)   //快速求x,y的最大公约数的方法 
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

