/*
蓝桥杯题目  基础练习 矩形面积交  
时间限制：1.0s   内存限制：512.0MB
      
问题描述
　　平面上有两个矩形，它们的边平行于直角坐标系的X轴或Y轴。对于每个矩形，我们给出它的一对相对顶点的坐标，请你编程算出两个矩形的交的面积。
输入格式
　　输入仅包含两行，每行描述一个矩形。
　　在每行中，给出矩形的一对相对顶点的坐标，每个点的坐标都用两个绝对值不超过10^7的实数表示。
输出格式
　　输出仅包含一个实数，为交的面积，保留到小数后两位。
样例输入
1 1 3 3
2 2 4 4
样例输出
1.00
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	double x1,y1,x2,y2,x3,y3,x4,y4;
	double m1,m2,n1,n2;
	scanf ("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	scanf ("%lf %lf %lf %lf",&x3,&y3,&x4,&y4);
	m1=max(min(x1,x2),min(x3,x4));
	n1=max(min(y1,y2),min(y3,y4));
	
	m2=min(max(x1,x2),max(x3,x4));
	n2=min(max(y1,y2),max(y3,y4));
	if (m2>m1&&n2>n1) {
		printf ("%.2f",(m2-m1)*(n2-n1));
	}
	else printf ("0.00");
	return 0;
} 
