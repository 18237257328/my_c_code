/*
Pta题目1018 锤子剪刀布 (20 分)
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：

现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。

输入格式：
输入第 1 行给出正整数 N（≤10^5 ），即双方交锋的次数。随后 N 行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。C 代表“锤子”、J 代表“剪刀”、B 代表“布”，第 1 个字母代表甲方，第 2 个代表乙方，中间有 1 个空格。

输出格式：
输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格。如果解不唯一，则输出按字母序最小的解。

输入样例：
10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J
输出样例：
5 3 2
2 3 5
B B

*/
#include<bits/stdc++.h>
using namespace std;

int main(void){
	int count1=0,count=0,count2=0,i,n,t1[3]={0},t2[3]={0};
	char ch1,ch2;
	scanf ("%d\n",&n);
	while(n--){
		scanf ("%c %c",&ch1,&ch2);
		getchar();
		if ((ch1=='C'&&ch2=='J')||(ch1=='J'&&ch2=='B')||(ch1=='B'&&ch2=='C')) {
			count1++;
			if (ch1=='B') t1[0]++;
			if (ch1=='C') t1[1]++;
			if (ch1=='J') t1[2]++;
			
		}
		else if ((ch1=='J'&&ch2=='C')||(ch1=='B'&&ch2=='J')||(ch1=='C'&&ch2=='B')) {
			count2++;
			if (ch2=='B')  t2[0]++;
			if (ch2=='C')  t2[1]++;
			if (ch2=='J')  t2[2]++;
			
		}
		else if (ch1==ch2)  count++;
 	}
 	printf ("%d %d %d\n",count1,count,count2);
 	printf ("%d %d %d\n",count2,count,count1);
 	
 	
	 
 	int max1=0,max2=0;
 	for (i=0;i<3;i++) {
 		if (t1[i]>t1[max1]) max1=i;
 		if (t2[i]>t2[max2]) max2=i;
	 }
	 
	 if (max1==0) printf ("B ");
	 else if (max1==1) printf ("C ");
	 else if (max1==2) printf ("J ");
	 
	 if (max2==0) printf ("B");
	 else if (max2==1) printf ("C");
	 else if (max2==2) printf ("J");
	return 0;
}
