#include <iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter number of rows: " ;
    cin >> rows;

     for (int i=rows;i>=1;i--)
        {
            for (int j=rows; j>=i;j--)
            
            {
             cout <<  " * ";
        }
        cout<< "\n";
    }
    return 0;
}