#include<stdio.h>
int main()
{
 int x,p,y,p1,z,t=0;
 scanf("%d %d",&x,&p);
 y=(x*p)/100;
 p1=x-y;
 z=(100-p)/100;
 while(p1!=0)
 {
   p1=z*p1;
   t=t+p1;
 }
 t=t+p1+x;
 printf("%d\n",t);
}
