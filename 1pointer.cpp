#include <iostream>
using namespace std;
int main(){
int average = 10;
int &ave= average;
int *p ,  **q;
p = &ave;
q = &p;
cout<<"\naverage value : " <<average;
cout<<"\n value using av:"<<ave;
cout<<"\n value of average using pointer variable:"<<*p;
cout<<"\n value of average using p:"<<p;
cout<<"\naddress of ave:"<<&ave;
cout<<"\n address of p:"<<&p;
cout<<"\n value of average using pointer variable q:"<<*q;
cout<<"\n value of p using pointer variable q:"<<q;
cout<<"\n address of q:"<<&q;
return 0;
}
