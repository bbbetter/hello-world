//������·�����
//ax + by = c
//dx + ey = f
//ע������/�������������
#include<stdio.h>
main()
{double a,b,c,d,e,f,x,y; 
 printf("������x yǰ���ϵ���Լ�c f ��ֵ\n");
 scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
  x=(c*e-b*f)/(a*e-b*d);
  y=(c*d-a*f)/(b*d-a*e);
  printf("x=%lf,y=%lf\n",x,y);
  } 
