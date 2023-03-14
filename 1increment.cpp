#include <iostream>
using namespace std;
int main()
{
int a, b,c;
a=10;
cout<<"\n value of a:"<<a;
cout<<":\n value of ++a \t:"<<++a<<"\t"<<a;
cout<<":\n value of a++ \t:"<<a++<<"\t"<<a;
cout<<":\n value of a \t:"<<a;
c=a++;
cout<<":\n value of b=++a \t:"<<b;
cout<<":\n value of a++ \t:"<<a++;
cout<<":\n value of c=a++ \t:"<<c;
return 0;
}
