#include <iostream>
#include <math.h>

using namespace std;

double f(double x){
    return x*x- 3;
}

int main(){
    double a, b;
    int iter;
    
    // get user input
    cout << "Enter lower bound of interval: ";
    cin >> a;
    
    cout << "Enter upper bound of interval: ";
    cin >> b;
    
    cout << "Enter maximum number of iterations: ";
    cin >> iter;
    
    for (int i = 0; i<inter;i++){
   
        double c = (a + b) / 2;
        
        if (f(c) == 0){
            break;
        } else if (f(a) * f(c) < 0){
            b = c;
        } else {
            a = c;
        }
        

    }
    
    double root = (a + b) / 2;
    cout << "Root: " << root << endl;
    
    return 0;
}
