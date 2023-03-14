#include <iostream>
using namespace std;
class sample
{
private:
static int counter;
int number;
public:
void getdata(int a)
{
number=a;
counter++;
}
void getcount(void)
{
cout<<"\ncounter:"<<counter;
}
};
int sample::counter;
int main()
{
sample a1,b1,c1;
a1.getcount();
b1.getcount();
c1.getcount();
a1.getdata(10);
b1.getdata(20);
c1.getdata(30);
cout<<"\nafter getting data:\n";
a1.getcount();
b1.getcount();
c1.getcount();
return 0;
}