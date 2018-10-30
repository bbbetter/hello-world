//求解一元二次方程的根
//查阅sqrt()函数
//注意有没有解

#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,delt,x1,x2;
	printf("输入方程的三个系数：");
	scanf("%f%f%f",&a,&b,&c);
	delt=b*b-4*a*c;
	x1=(-b+sqrt(delt))/(2*a);
	x2=(b+sqrt(delt))/(2*a);
	printf("方程的解分别为：x1=%.2f x2=%.2f\n",x1,x2);
}
