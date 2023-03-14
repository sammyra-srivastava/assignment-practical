#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
int value;
cout<<"\n please enter value"<<endl;
cin>>value;
cout<<"decimal base ="<<dec<<setw(10)<<value<<endl;
cout<<"hexadecimal base ="<<setw(10)<<hex<<value<<endl;
cout<<"octal base ="<<oct<<setw(10)<<value<<endl;
cout<<"decimal base ="<<setbase(10)<<setw(10)<<value<<endl;
cout<<"hexa decimal base ="<<setbase(16)<<setw(10)<<value<<endl;
cout<<"Octal base ="<<setbase(8)<<setw(10)<<value<<endl;
return 0;
}
