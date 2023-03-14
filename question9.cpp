#include <iostream>
using namespace std;

int main() {
    int n, d, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a digit to check: ";
    cin >> d;
    while (n > 0) {
        if (n % 10 == d) {
            count++;
        }
        n /= 10;
    }
    cout << "The digit " << d << " appears " << count << " times in the number." << endl;
    return 0;
}