#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i < 2000; i++) {
        if (i % 10 == 0) {
            cout << i <<" , " ;
        }
    }
    return 0;
}