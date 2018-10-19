#include<stdio.h>
main()
{
int a,s;
printf("enter the value of a");
scanf("%d",&a);
s=0;
while(a>0)
{
s=s+(a%10);
a=a/10;
}
printf("sum of digits%d",s);
}
