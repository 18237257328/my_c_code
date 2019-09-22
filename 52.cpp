/* ^＆^  题目：http://acm.hdu.edu.cn/showproblem.php?pid=6702
Problem Description
Bit operation is a common computing method in computer science ,Now we have two positive
 integers A and B ,Please find a positive integer C that minimize the value of the formula 
(A  xor  C)  &  (B  xor  C) .Sometimes we can find a lot of C to do this ,So you need to find the
 smallest CC that meets the criteria .
For example ,Let's say A is equal to 5 and B is equal to 3 ,we can choose C=1,3.... ,so the
 answer we're looking for C is equal to 1.
If the value of the expression is 0 when C=0, please print 1.
Input
The input file contains T test samples.(1<=T<=100)
The first line of input file is an integer T.
Then the T lines contains 2 positive integers, A and B, (1≤A,B<232)
Output
For each test case,you should output the answer and a line for each answer.

Sample Input
1
3 5
Sample Output
1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,l,r,a,b;
	stack<int>s;
	cin>>t;
	while(t--){
		cin>>l>>r;
		while(s.empty()!=true) s.pop();  //清空栈 
		int ans=0;
		while(l!=0&&r!=0){  
			a=l&1; //取该数二进制的最后一位 
			b=r&1;
			l=l>>1; //把二进制数右移一位，及去掉二进数的最后一位 
			r=r>>1;
			if(a==b) s.push(a); //两个二进制数相异或，相同就取相同的，不同取0，
			            //得到的二进制数c就是满足（a^c)&(b^c)==0的最小结果 
			else s.push(0);
		}
		long long temp;
		while(s.empty()!=true){   
			temp=s.top(); //依次出栈 
			s.pop();
			ans=(ans<<1)+temp; //转化成十进制数 
		}
		if(ans==0) ans=1; //0的话题意输出1 
		printf ("%lld\n",ans);
	}
	/*@方法2：while(t--){
		cin>>a>>b;
		c=a&b;  //a&b即模拟了上述a与b的二进制相同取相同的，不同取0的过程 
		if(c==0) printf("1\n");
		else printf ("%d\n",c);
	}*/
	return 0;
}