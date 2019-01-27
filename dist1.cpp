#include<iostream>
using namespace std;
class distance
{
public:
int feet;
int inch;
public:
distance()
{
feet=12;
inch=11;
}
distance(int a,int b)
{
feet=a;
inch=b;
}
void read();
void print();
}d1,d2(33,6),d3;

void distance::read()
{
cout<<"\nEnter the feet and inch: \n";
cin>>feet>>inch;
}
void distance::print()
{
cout<<"\nFeet = "<<feet;
cout<<"\nInch= "<<inch;
}
main()
{
//distance d1,d2(33,6),d3;

d1.print();
d2.print();

d3.feet=d1.feet+d2.feet;
d3.inch=d1.inch+d2.inch;
d3.print();
}
