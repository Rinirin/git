#include<stdio.h>
void main()
{
int a,b,c,largest;
printf("enter a number");
scanf("%d"&a);
printf("enter a number");
scanf("%d"&b);
printf("enter a number");
scanf("%d"&c);
largest=a;
if(b>largest)
{
largest=b;
printf("%d largest is ",b);
}
if(c>largest)
{
largest=c;
printf("%d largest is ",c);
}
printf("%d largest is ",a);
}

