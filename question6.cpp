#include <iostream>
#include <cmath>
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
      if (i % 2 == 0) { // if i is even, subtract term from sum
         term = pow(x, 2 * i - 1) / factorial; // calculate term
         sum -= term; // subtract term from sum
      } else { // if i is odd, add term to sum
         term = pow(x, 2 * i - 1) / factorial; // calculate term
         sum += term; // add term to sum
      }
      i++;
   }

   cout << "Sum of the series is: " << sum << endl;

   return 0;
}






