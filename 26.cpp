/*
���ű���Ŀ   ������ϰ ���Ķ���  
ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
      
��������
����Tom�������ڸ��о�������һ�Ź��ڻ���Ŀγ̣���һ������������Ϊͷ�ۣ�һ��Ⱦɫ�����г�ǧ���������ԣ����Ǵ�0��ʼ��ţ��������򣬼�ǧ���������ڡ�
��������˵���ڶ�ѧ�������1234567009��λ���ϵļ��ʱ���⿴�������Ǻ���׼ȷ��������ġ�
�������ԣ������е���Ҫһ��ϵͳ��Ȼ��������12 3456 7009ʱ���������Ӧ�����
����ʮ������ǧ�İ���ʮ������ǧ���
�����ú���ƴ����ʾΪ
����shi er yi san qian si bai wu shi liu wan qi qian ling jiu
����������ֻ��Ҫ������Ϳ����ˡ�
������������ǰ����������һ��ϵͳ������һ�����������ִ���������������Ķ�д�Ĺ淶תΪ����ƴ���ִ������ڵ�����������һ���ո���񿪡�
����ע������ϸ��չ淶������˵��10010��������yi wan ling yi shi�������ǡ�yi wan ling shi������100000��������shi wan�������ǡ�yi shi wan������2000��������er qian�������ǡ�liang qian����
�����ʽ
������һ�����ִ�����ֵ��С������2,000,000,000��
�����ʽ
������һ����СдӢ����ĸ�����źͿո���ɵ��ַ�������ʾ������Ӣ�Ķ�����
��������
1234567009
�������
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

