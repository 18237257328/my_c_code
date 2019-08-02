/*
蓝桥杯题目 基础练习 高精度加法  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　输入两个整数a和b，输出这两个整数的和。a和b都不超过100位。
算法描述
　　由于a和b都比较大，所以不能直接使用语言中的标准数据类型来存储。对于这种问题，一般使用数组来处理。
　　定义一个数组A，A[0]用于存储a的个位，A[1]用于存储a的十位，依此类推。同样可以用一个数组B来存储b。
　　计算c = a + b的时候，首先将A[0]与B[0]相加，如果有进位产生，则把进位（即和的十位数）存入r，把和的个位数存入C[0]，即C[0]等于(A[0]+B[0])%10。然后计算A[1]与B[1]相加，这时还应将低位进上来的值r也加起来，即C[1]应该是A[1]、B[1]和r三个数的和．如果又有进位产生，则仍可将新的进位存入到r中，和的个位存到C[1]中。依此类推，即可求出C的所有位。
　　最后将C输出即可。
输入格式
　　输入包括两行，第一行为一个非负整数a，第二行为一个非负整数b。两个整数都不超过100位，两数的最高位都不是0。
输出格式
　　输出一行，表示a + b的值。
样例输入
20100122201001221234567890
2010012220100122
样例输出
20100122203011233454668012 
*/ 
#include<bits/stdc++.h>
using namespace std;
 
int main(void)  {
    char a[1000],b[1000];
    int len1,len2,i,j,item=0,l,ans[100],s,k=0;
    scanf ("%s %s",a,b);
    len1=strlen(a);
    len2=strlen(b);
    if (len1>len2) {
    	for (i=len2-1;i>=0;i--) {
    		b[i+(len1-len2)]=b[i];
		}
		for (i=0;i<(len1-len2);i++) {
			b[i]='0';
		}
	}
	else if (len1<len2) {
		for (i=len1-1;i>=0;i--) {
			a[i+(len2-len1)]=a[i];
		}
		for (i=0;i<(len2-len1);i++) {
			a[i]='0';
		}
	}

	l=max(len1,len2);
	//printf ("%s\n%s\n",a,b);
	for (i=l-1;i>=0;i--) {
		s=(a[i]-'0')+(b[i]-'0')+item;
		if (i==0) {
			ans[k++]=s;
			break;
		}
		if (s>9) {
			ans[k++]=s%10;
			item=s/10;
		}
		else  {
			ans[k++]=s;
			item=0;
		}
	}
	int flag=0;
	for (i=0;i<k;i++) {
		if (ans[i]!=0) {
			flag=1;
			break;
		}
	}
	if (flag==0) {
		printf("0");
		return 0;
	}
	flag=0;
	for (i=k-1;i>=0;i--) {
		if (ans[i]!=0&&flag==0) {
			printf ("%d",ans[i]);
			flag=1;
		} 
	else if (flag==1) 	printf ("%d",ans[i]);
	}
    return 0;
} 


