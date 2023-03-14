#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double sum = 0.0, term = 1.0;
    
    cout << "Enter a positive integer n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        term *= i;
        if (i % 2 == 0) {
            sum -= i / term;
        } else {
            sum += i / term;
        }
    }
    
    cout << "The sum of the series is: " << sum << endl;
    
    return 0;
}



