#include<stdio.h>
main()
{
int i,n,sum=0;
printf("enter the number limit");
scanf("%d",&n);
i=0;
do
{
sum=sum+i;
i++;
}
while(i<=n);
printf("%d",sum);
}
