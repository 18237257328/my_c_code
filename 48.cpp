/*
�ǳ�����

Problem Description
���һ�������˶��Ժ�ȿ�����һ�����������飬����seeyouȴ����ô��Ϊ��
��Ϊÿ�ε�seeyou���˿����Ժ󣬰�ţ��Ҫ���seeyouһ�������һƿ���֣�����һ��Ҫ�ȵĺ�seeyouһ���ࡣ
��seeyou������ֻ���������ӣ����ǵ������ֱ���N ������M ���� ,
���ֵ����ΪS ��S<101��������(����װ��һƿ) ��
��������֮������໥������ (����û�п̶ȵģ��� S==N+M��101��S��0��N��0��M��0) ��
������ACMER����˵������ƽ�������������������ֵ����ٵĴ���������������"NO"��
�������� : S ���ֵ���� , N �� M���������ӵ���������"0 0 0"������
output
�����ƽ�ֵĻ����������Ҫ���Ĵ������������"NO"��

Sample Input
7 4 3 4 1 3 0 0 0

Sample Output
NO 3

�����������

(һ��S--��N ? | | ?M?

��1��S -��N

��a�����԰�N����?

��b�����ܰ�N����

��2��S-��M


��a�����԰�M����?

��b�����ܰ�M����

(����N--��S ? | | ?M

��3��N-��S?

��a�����԰�S����?

��b�����ܰ�S����


��4��N-��M

��a�����԰�M����?

��b�����ܰ�M����

(����M--��S ? | | ?N ��������

������������û��BFSһ�¼���


--------------------- 
���ߣ���������_�� 
��Դ��CSDN 
ԭ�ģ�https://blog.csdn.net/hpuhjh/article/details/49557957 
��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�
*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int s,n,m,num;
};
int vis[10][10][10]={0},n,m,s;
int BFS();

int main(){
	while(1){
		cin>>s>>n>>m;
		if (s==0&&n==0&&m==0) break;
		int ans=BFS();
		if (ans==-1) cout<<"NO"<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}
int BFS(){
	queue<Node>q;
	Node f,v;
	v.s=s;  v.n=0;  v.m=0;   v.num=0;
	q.push(v);
	if (s%2!=0) return -1;
	while(q.empty()!=true){
		f=q.front();
		q.pop();
		if ((f.s==0&&f.n==f.m)||(f.n==0&&f.s==f.m)||(f.m==0&&f.s==f.n)) return f.num;
		
		if (f.s!=0&&n-f.n>0){          //s-->n
			if (f.s>n-f.n) {
				v.s=f.s-(n-f.n);
				v.n=n;
				v.m=f.m;
				v.num=f.num+1;
			}
			else {
				v.s=0;
				v.n=f.n+f.s;
				v.m=f.m;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
		if (f.s!=0&&m-f.m>0){            //s-->m
			if (f.s>m-f.m) {
				v.s=f.s-(m-f.m);
				v.m=m;
				v.n=f.n;
				v.num=f.num+1;
			}
			else {
				v.s=0;
				v.n=f.n+f.s;
				v.n=f.n;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
		if (f.n!=0&&s-f.s>0){      //n-->s
			if (f.n>s-f.s) {
				v.n=f.n-(s-f.s);
				v.s=s;
				v.m=f.m;
				v.num=f.num+1;
			}
			else {
				v.n=0;
				v.s=f.s+f.n;
				v.m=f.m;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
			if (f.n!=0&&m-f.m>0){      //n-->m
			if (f.n>m-f.m) {
				v.n=f.n-(m-f.m);
				v.m=m;
				v.s=f.s;
				v.num=f.num+1;
			}
			else {
				v.n=0;
				v.m=f.m+f.n;
				v.s=f.s;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
			if (f.m!=0&&s-f.s>0){      //m-->s
			if (f.m>s-f.s) {
				v.m=f.m-(s-f.s);
				v.s=s;
				v.n=f.n;
				v.num=f.num+1;
			}
			else {
				v.m=0;
				v.s=f.s+f.m;
				v.n=f.n;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
		
			if (f.m!=0&&n-f.n>0){      //m-->n
			if (f.m>n-f.n) {
				v.m=f.m-(n-f.n);
				v.n=n;
				v.s=f.s;
				v.num=f.num+1;
			}
			else {
				v.m=0;
				v.n=f.n+f.m;
				v.s=f.s;
				v.num=f.num+1;
			}
			if (vis[v.s][v.n][v.m]==0){
				vis[v.s][v.n][v.m]=1;
				q.push(v);
			}
		} 
	} 
	return -1;
}
