#include<stdio.h>
main()
{
int t1=0,t2=1,nxtrm=0,n;
printf("enter a positive num");
scanf("%d",&n);
printf("fibonacci series%d,%d",t1,t2);
nxtrm=t1+t2;
while(nxtrm<=n)
{
printf("%d",nxtrm);
t1=t2;
t2=nxtrm;
nxtrm=t1+t2;
}
}
