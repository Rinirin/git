#include<stdio.h>
main()
{
int i,n,p;
printf("enter a number");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
p=i*n;
if(i==5)
continue;
printf("%d",p);
}
}

