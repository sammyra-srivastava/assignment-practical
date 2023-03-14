#include<iostream>
using namespace std;
class basic_info
{
private:
char name[20];
long int rollno;
public:
void getdata();
void display();
};
class age:public basic_info
{
private:
int age;
public:
void getdata();
void display();
};
void basic_info::getdata()
{
cout<<"\n enter a name:\n";
cin>>name;
cout<<"\nroll no:\n";
cin>>rollno;
}
void basic_info::display()
{
cout<<"\n"<<name<<"\t"<<rollno<<"\t";
}
void age::getdata()
{
basic_info::getdata();
cout<<"\nenter your age:"<<endl;
cin>>age;
}
void age::display()
{
basic_info::display();
cout<<age;
}
int main()
{
age a1,b1,c1;
a1.getdata();
b1.getdata();
c1.getdata();
cout<<"\n------------------------------\n";
cout<<"\nname\trollno\tage\n";
a1.display();
b1.display();
c1.display();
return 0;
}
