/* 
蓝桥杯题目  算法训练 6-1 递归求二项式系数值  
时间限制：10.0s   内存限制：256.0MB
    
问题描述
C(下标是n，上标是m)={                      1                          (k==0||k==n);
                       C( 下标是n-1，上标是k)+C(下标是n-1，上标是k-1)  (0<k<n);     }
                       用递归发法求C(下标是n，上标是k)。
					    
样例输入
一个满足题目要求的输入范例。
3 10
样例输出
120
与上面的样例输入对应的输出。

数据规模和约定
　　输入数据中每一个数的范围。
　　例：结果在int表示时不会溢出。 
*/ 
#include<bits/stdc++.h>
using namespace std;

int ans(int k,int n);


int main(void) {
	int n,k,y;
    scanf ("%d %d",&k,&n);
    y=ans(k,n);
    printf ("%d",y);
	return 0;
}
int ans(int k,int n) {
	int result;
	if (k==0||k==n)  result=1;
	else {
		result=ans(k,n-1)+ans(k-1,n-1);
	}
	return result;
}
