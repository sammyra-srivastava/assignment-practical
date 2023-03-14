#include <iostream>
using namespace std;

int main() {
    int n, d, position = -1, i = 1;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a digit: ";
    cin >> d;
    int temp = n; // a temporary variable to store the original value of n
    while (temp > 0) {
        if (temp % 10 == d) {
            position = i;
            break;
        }
        temp /= 10;
        i++;
    }
    if (position == -1) {
        cout << d << " is not present in the number " << n << endl;
    } else {
        cout << d << " is present at position " << position << " in the number " << n << endl;
    }
    return 0;
}
