//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include<stdio.h>
main()
{double a,b,c,d,e,f,x,y; 
 printf("请输入x y前面的系数以及c f 的值\n");
 scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
  x=(c*e-b*f)/(a*e-b*d);
  y=(c*d-a*f)/(b*d-a*e);
  printf("x=%lf,y=%lf\n",x,y);
  } 
