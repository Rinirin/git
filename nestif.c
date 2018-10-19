#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a number");
scanf("%d",&a);
printf("enter a number");
scanf("%d",&b);
printf("enter a number");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("%d largest is ",a);
}
else
{
if(b>a&&b>c)
{
printf("%d largest is ",b);
}
else
{
printf("%d largest is ",c);
}
}
}

