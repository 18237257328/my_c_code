//PTA题目1011 A+B 和 C (15 分)

#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#define inf 0x3f3f3f3f
using namespace std;
typedef long long ll;
const int maxn=2e6+100;
struct node{
    int num,pos;
}e[maxn];
bool cmp(node a,node b)//排序
{
    if(a.num==b.num)
        return a.pos>b.pos;
    return a.num<b.num;
}
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        e[i].num=x+e[i-1].num;//前缀和
        e[i].pos=i;//位置
    }
    for (int i=1;i<=n;i++) {
    	printf ("%d*%d#  ",e[i].num,e[i].pos);
	}
    n++;
    sort(e+1,e+n+1,cmp);
    printf ("***\n");
    for (int i=1;i<=n;i++) {
    	printf ("%d*%d#  ",e[i].num,e[i].pos);
	}
    int minx=n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        minx=min(minx,e[i].pos);
        printf ("%d! ",minx);
        if(e[i].pos>minx)
            ans=max(ans,e[i].pos-minx);
            
    }
    printf("%d\n",ans);
    return 0;
}
