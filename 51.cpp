/*
问题 2076: 数数字
题目描述
Carryon 最近迷上了数数字，然后 Starry 给了他一个区间 [m, n],然后提了几个要求，
1、需要将 m 到 n 之间的数全部转化成 16 进制，然后连起来。
2、将连起来的数又转化成 10 进制。
3、将最终结果对 15 取模。
数据范围：1 <= m <= n <= 1000000000000
输入
单组输入 m 和 n 的值

输出
输出最终结果。

样例输入
10 14

样例输出
0

提示
如：10、11、12、13、14的16进制分别是a、b、c、d、e。依次连在一起是abcde，转换成10进制是703710，对15取模为0。

题解：对区间两端取余,可以缩小区间,便于计算
*/ 
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,ans;
    cin>>n>>m;
    n=n%15;
    m=m%15;
    if(n>m)m=m+15; 
    ans=((m-n+1)*(n+m))/2;
    ans=ans%15;
    cout<<ans;
	return 0;
}
