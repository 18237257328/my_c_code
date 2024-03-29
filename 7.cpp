/*
蓝桥杯题目   算法提高 合并石子  
时间限制：2.0s   内存限制：256.0MB
    
问题描述
　　在一条直线上有n堆石子，每堆有一定的数量，每次可以将两堆相邻的石子合并，合并后放在两堆的中间位置，合并的费用为两堆石子的总数。求把所有石子合并成一堆的最小花费。
输入格式
　　输入第一行包含一个整数n，表示石子的堆数。
　　接下来一行，包含n个整数，按顺序给出每堆石子的大小 。
输出格式
　　输出一个整数，表示合并的最小花费。
样例输入
5
1 2 3 4 5
样例输出
33
数据规模和约定
　　1<=n<=1000, 每堆石子至少1颗，最多10000颗。 
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005],sum[1005]={0};

int main (void) {
	int n,i,x,j,k,len,temp;
	scanf ("%d",&n);
	for (i=1;i<=n;i++) {
		scanf ("%d",&x);
		sum[i]=sum[i-1]+x;
		dp[i][i]=0;
	}
	for (len=2;len<=n;len++) {
		for (i=1;i+len<=n+1;i++) {
			j=i+len-1;
			dp[i][j]=999999999;
			for (k=i;k<j;k++) {
				temp=dp[i][k]+dp[k+1][j]+sum[j]-sum[i-1];
				if (dp[i][j]>temp) {
					dp[i][j]=temp;
				}
			}
		}
	}
	printf ("%d",dp[1][n]);
	return 0;
}
