#include <iostream>
using namespace std;
int m = 10;
int main(){
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout<< "\n i inner block:";
        cout<<"\n k = "<< k <<"\n";
        cout<<"\n m = "<< m <<"\n";
        cout<<":: m = "<< ::m <<"\n";

    }
    cout<<"\n we are in outer block:";
    cout<<"\n m = "<< m <<"\n";
    cout<<":: m = "<< ::m <<"\n";
    return 0 ;
}