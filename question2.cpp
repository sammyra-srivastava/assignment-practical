#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        int cube = i * i * i;
        if (i == 1) {
            cout << "The cube of " << i << " is " << cube << endl;
        } else {
            cout << "The cube of " << i << " is " << cube << endl;
        }
    }
    return 0;
}