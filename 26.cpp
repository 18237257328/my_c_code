/*
蓝桥杯题目   基础练习 数的读法  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　Tom教授正在给研究生讲授一门关于基因的课程，有一件事情让他颇为头疼：一条染色体上有成千上万个碱基对，它们从0开始编号，到几百万，几千万，甚至上亿。
　　比如说，在对学生讲解第1234567009号位置上的碱基时，光看着数字是很难准确的念出来的。
　　所以，他迫切地需要一个系统，然后当他输入12 3456 7009时，会给出相应的念法：
　　十二亿三千四百五十六万七千零九
　　用汉语拼音表示为
　　shi er yi san qian si bai wu shi liu wan qi qian ling jiu
　　这样他只需要照着念就可以了。
　　你的任务是帮他设计这样一个系统：给定一个阿拉伯数字串，你帮他按照中文读写的规范转为汉语拼音字串，相邻的两个音节用一个空格符格开。
　　注意必须严格按照规范，比如说“10010”读作“yi wan ling yi shi”而不是“yi wan ling shi”，“100000”读作“shi wan”而不是“yi shi wan”，“2000”读作“er qian”而不是“liang qian”。
输入格式
　　有一个数字串，数值大小不超过2,000,000,000。
输出格式
　　是一个由小写英文字母，逗号和空格组成的字符串，表示该数的英文读法。
样例输入
1234567009
样例输出
shi er yi san qian si bai wu shi liu wan qi qian ling jiu 
*/
#include<stdio.h>
#include<string.h>

int main(void){
	int count=0,i,k=0,ans[100],flag=0,item;
	char a[15][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi","bai","qian","wan","yi"};
	long long int n;
	scanf ("%lld",&n);
	if (n==0) ans[k++]=0;
	while(n!=0){
		i=n%10;
		n=n/10;
		count++;
		if (i!=0) flag=1;
		if (n>0&&n<10&&flag==0) {
			if (count==5) ans[k++]=13;
			else if (count==9) ans[k++]=14;
		} 
		if (flag==1) {
			if (i!=0&&(count==2||count==6||count==10)) {
				ans[k++]=10;
			}
			else if (i!=0&&(count==3||count==7)) {
				ans[k++]=11;
			}
			else if (i!=0&&(count==4||count==8)) {
				ans[k++]=12;
			}
			else if (count==5) {
				ans[k++]=13;
			}
			else if (count==9) {
				ans[k++]=14;
			}
			if (i!=0) item=1;
			if (item==1){
				if (i==1&&(count==2||count==6||count==10)) continue;
				ans[k++]=i;
			}
			if (i==0) item=0;
		}	
	}
	for (i=k-1;i>=0;i--) {
			if (i!=k-1) printf (" ");
			printf ("%s",a[ans[i]]);
		} 
	return 0;
} 

