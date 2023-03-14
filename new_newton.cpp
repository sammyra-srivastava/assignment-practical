#include<iostream>
using namespace std;
// declation of y, change value of f for other equations
float y(float x)
{
    float f=x*x+x-1;
    return f;
}
// dy/dx of y, change value of f as the differentiation of above y
float dy(float x)
{
    float f=2*x+1;
    return f;
}

int main()
{
    float x = 1;

   
    for(int i=0;i<2;i++)
    {
         x=x-y(x)/dy(x); 
    }
    
    //if root correct upto certain(2) decimal place is asked.
   
    cout<<"the root of the equation is :"<<x;
}

