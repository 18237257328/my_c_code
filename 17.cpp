/*
蓝桥杯题目  算法训练 s01串  
时间限制：1.0s   内存限制：256.0MB
    
问题描述
　　s01串初始为"0"
　　按以下方式变换
　　0变1，1变01
输入格式
　　1个整数(0~19)
输出格式
　　n次变换后s01串
样例输入
3
样例输出
101
数据规模和约定
　　0~19 
*/ 
#include<bits/stdc++.h>
using namespace std;

string ans(int n);

int main(void){
	int n;
	scanf ("%d",&n);
	cout<<ans(n);
	//cout << ans(n) << endl;
	//printf ("%s",ans(n));
	return 0;
}
string ans(int n){
	if (n==0) return "0";
	else if (n==1) return "1";
	else  return ans(n-2)+ans(n-1);
}
