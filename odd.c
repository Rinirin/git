#include<stdio.h>
void main()
{
int a,rem;
printf("enter a number");
scanf("%d",&a);
rem=a%2;
if(rem==0)
{
printf("even");
}
if(rem!=0)
{
printf("odd");
}
}
