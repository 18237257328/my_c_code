/*
Pta题目1007 素数对猜想 (20 分)
让我们定义dn 为：dn =pn+1-pn，其中pi 是第i个素数。显然有d1=1，且对于n>1有dn是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
现给定任意正整数N(<10^5)，请计算不超过N的满足猜想的素数对的个数。
输入格式:
输入在一行给出正整数N。

输出格式:
在一行中输出不超过N的满足猜想的素数对的个数。

输入样例:
20
输出样例:
4
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int x);

int main(void) {
	int n,i,a[10000],k=0,t=0;
	scanf ("%d",&n);
	for (i=1;i<=n;i++) {
		if (prime(i)==1) a[k++]=i;
	}
	for (i=k-1;i>=1;i--) {
		if (a[i]-a[i-1]==2) t++;
	}
	printf ("%d",t);
	return 0;
}
int prime(int x) {
	int flag=0,i;
	if (x<=0) return 0;
	if (x==1) return 1;
	else {
		for (i=2;i<=sqrt(x);i++) {
			if (x%i==0) {
				flag=1;
				break;
			}
		}
		if(flag==0)   return 1;
		else   return 0;
	}
}
