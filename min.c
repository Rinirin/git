#include<stdio.h>
main()
{
int a[4],i,min,max;
printf("enter the elements");
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
max=a[0];
for(i=0;i<4;i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("min=%d\n max=%d\n",min,max);
}



