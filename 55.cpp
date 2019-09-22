/*  https://pintia.cn/problem-sets/994805046380707840/problems/994805091888906240
L1-039 古风排版 (20 分)
中国的古人写文字，是从右向左竖向排版的。本题就请你编写程序，把一段文字按古风排版。
输入格式：
输入在第一行给出一个正整数N（<100），是每一列的字符数。第二行给出一个长度不超过1000的
非空字符串，以回车结束。
输出格式：
按古风格式排版给定的字符串，每列N个字符（除了最后一列可能不足N个）。
输入样例：
4
This is a test case

输出样例：
asa T
st ih
e tsi
 ce s

*/
#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,len,c,k=0;
	char s[10000],b[1000][1000];
	scanf ("%d\n",&n);
	gets(s);
	len=strlen(s);
	if (len%n==0) c=len/n;
	else c=(len/n)+1;
	for (j=c-1;j>=0;j--) {
		for (i=0;i<n;i++) {
			if (k>=len) b[i][j]=' ';
			else b[i][j]=s[k];
			k++;
		}
	}

	for (i=0;i<n;i++) {
		for (j=0;j<c;j++) {
			printf ("%c",b[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
