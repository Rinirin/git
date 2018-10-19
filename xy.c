#include<stdio.h>
main()
{
int count,n;
float x,y;
printf("enter values of x and n");
printf("\n X=");
scanf("%f",&x);
printf("\n N=");
scanf("%d",&n);
y=1.0;
count=1;
while(count<=n)
{
y=y*x;
count++;
}
printf("%f to power %d=%f",x,n,y);
}
