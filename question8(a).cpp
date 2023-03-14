#include <iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter number of rows: " ;
    cin >> rows;

     for (int i = rows; i >= 1; --i) { // loop for iterating
        for (int j = 1; j <= i; ++j) { // loop for printing
            cout << j << " ";
        }
        cout<< "\n";
    }
    return 0;
}