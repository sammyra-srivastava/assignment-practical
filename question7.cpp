#include <iostream>
using namespace std;
int main() {
    int n, i = 1, sum = 0;

    cout << "Enter a positive integer n: ";
    cin >> n;

start:
    sum += i * i;
    i++;

    if (i <= n)
        goto start;

   cout << "The sum of the series (1^2) + (2^2) + ... + (n^2) is " << sum << endl;

    return 0;
}