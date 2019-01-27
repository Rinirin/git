#include<iostream>
#include<cstring>
using namespace std;
class person
{
char name[20];
float age;
public:
person(char *s,float a)
{
strcpy(name,s);
age=9;
}
person &person::greater(person &x)
{
if(x.age>=age)
return x;
else
return *this;
}
void display(void)
{
cout<<"name="<<name<<"\n"<<"age="<<age<<"\n";
}
};
int main()
{
person p1("john",37.50),p2("ahamed",29.0),p3("mira",40.50);
person p=p1.greater(p3);
cout<<"elder person is\n";
p.display();
p=p1.greater(p2);
cout<<"elder person is\n";
p.display();
}

