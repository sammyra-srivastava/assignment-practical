#include<iostream>
using namespace std;

class fibonacci
{
private:
unsigned long int f0,f1,fib;
public:
fibonacci()
{
cout<<"\n running constructor.";
f0=-1;
f1=1;
fib=f0+f1;
}

void increment()
{
f0=f1;
f1=fib;
fib=f0+f1;
}

void display()
{
cout<<fib<<"\t";
}
};

int main()
{
fibonacci number;
for(int i=0;i<=15;++i)
{
number.display();
number.increment();
}
return 0;
}