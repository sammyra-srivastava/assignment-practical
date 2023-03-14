#include <iostream>
using namespace std;
int main()
{
int first , second, min;
cout<<"\n please enter the two value:";
cin>>first>>second;
min = (first<second)?first:second;
cout<<"\n entered value "<<min<<"is smaller";
return 0;
}
