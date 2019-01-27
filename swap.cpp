#include<iostream>
using namespace std;
void swap(int &a,int &b);
main()
{
int x=10,y=5;
cout<<"before swapping x="<<x<<"y="<<y;
swap(x,y);
cout<<"after swapping x="<<x<<"y="<<y;
return 0;
}
void swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}
