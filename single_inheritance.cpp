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
void basic_info::getdata()
{
cout<<"\n enter a name:";
cin>>name;
cout<<"\nroll no:";
cin>>rollno;
}
void basic_info::display()
{
cout<<name<<"\t"<<rollno<<endl;
}
int main()
{
basic_info a1,b1,c1;
a1.getdata();
b1.getdata();
c1.getdata();
cout<<"\n------------------------------\n";
cout<<"\nname\trollno\n";
cout<<"\n------------------------------\n";
a1.display();
b1.display();
c1.display();
return 0;
}