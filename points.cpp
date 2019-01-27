#include<iostream>
using namespace std;
class point
{ int x;
int y;
public:
void read();
void display();
point()
{
x=3;
y=9;
}

point(int a,int b)
{
x=a;
y=b;
}
};
void point::read()
{
cout<<"Enter two number:\n";
cin>>x>>y;
}
void point::display()
{
cout<<"\nx= "<<x;
cout<<"\ny="<<y;
}

main()
{ point p1,p2;
point p3(50,10);
p1.display();
p2.read();
p2.display();
p3.display();
}

