#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    for(int i=0;i<=6;i++){
        for(int j=0;j<=5-i;j++)
        cout<<" ";
        
        for(int k=i;k>=0;k--)
        cout<<k;
        
        for(int k=1;k<=i;k++)
        cout<<k;
        
        cout<<endl;
        
    }
    
    
    return 0;
}
