#include <iostream>
#include <math.h>
using namespace std;
int main() {
   int n, i = 1;
   double x, sum = 0, term = 1, factorial = 1;

   cout << "Enter the value of x: ";
   cin >> x;
   cout << "Enter the value of n: ";
   cin >> n;

   while (i <= n) {
      factorial *= 2 * i * (2 * i - 1);  // calculate factorial
      term = pow(x, 2 * i) / factorial; // calculate term
      sum += term; // add term to sum
      i++;
   }

   sum += x; // add first term to sum

   cout << "Sum of the series is: " << sum << endl;

   return 0;
}