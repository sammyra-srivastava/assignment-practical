#include<iostream>
using namespace std;
class point
{
int x,y;
public:
point(int a,int b)
{
cout<<"\nconstructor call";
x=a;
y=b;
}
void display()
{
cout<<"("<<x<<","<<y<<")";
}
};
int main()
{
point p1(1,2);
cout<<"\npoint p1= ";
p1.display();
point p2(0,0);
cout<<"\npoint p2= ";
p2.display();
return 0;
}