/*
蓝桥杯题目 算法提高 P1001大数乘法  
时间限制：1.0s   内存限制：256.0MB
    
　　当两个比较大的整数相乘时，可能会出现数据溢出的情形。为避免溢出，可以采用字符串的方法来实现两个大数之间的乘法。具体来说，首先以字符串的形式输入两个整数，每个整数的长度不会超过8位，然后把它们相乘的结果存储在另一个字符串当中（长度不会超过16位），最后把这个字符串打印出来。例如，假设用户输入为：62773417和12345678，则输出结果为：774980393241726.

输入：
　　62773417 12345678

输出：
　　774980393241726 
*/
#include<stdio.h>
#include<string.h>
int main(void) {
	int len1,len2,i,j,s,ans[100]={0},k=0,l=0,p;
	char a[100],b[100];
	scanf ("%s %s",a,b);
	if (strcmp(a,"0")==0||strcmp(b,"0")==0) {
		printf ("0");
		return 0; 
	}
	len1=strlen(a);
	len2=strlen(b);
	for (i=len1-1;i>=0;i--) {
		k=l++;
		for (j=len2-1;j>=0;j--) {
			s=ans[k]+(a[i]-'0')*(b[j]-'0');
			if (s>9)  {
				ans[k]=s%10;
				k++;
				ans[k]=s/10+ans[k];
			}
			else {
				ans[k]=s;
				k++;
			}
		}
		/*for (p=0;p<=k;p++) {
			printf ("%d* ",ans[p]);
		}
		printf ("\n");*/
}
  for (i=k;i>=0;i--) {
  	 if (i==k&&ans[k]==0)  continue;
  	 printf ("%d",ans[i]);
  }
	return 0;
} 
