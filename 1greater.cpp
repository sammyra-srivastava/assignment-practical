#include <iostream>
using namespace std;
int main()
{
int n1,n2,n3;
cout<<"Enter any three number";
cin>> n1>>n2>>n3;
if(n1>n2 && n1>n3)
cout<<n2<<"is greater value";
else 
cout<<n3<<" is greater value";
return 0;
}