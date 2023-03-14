#include<iostream>
using namespace std;
class code
{
int id;
public:
code(){
}
code(int a)
{
cout<<"\n constructor called..";
id=a;
}
//format of copy constructor: class_name(class_name & ptr)
code(code &x)
{
cout<<"\n copy constructor called...";
id=x.id;
}
void display(void)
{
cout<<id;
}
};
int main()
{
code a(10); // object a is created and intrialized
code b(a); // copy constructor
code c=a; // copy constructor again
code d; // d object is created, but not initialized
d=a; // copy constructor not called
cout<<"\n id of a:";
a.display();
cout<<"\n id of b:";
b.display();
cout<<"\n id of c:";
c.display();
cout<<"\n id of d:";
d.display();
return 0;
}

