#include <iostream>
using namespace std;
int main(){
    int first , second, min;
    cout<<"\n please enter first values:";
    cin >>first;
    cout<<"\n please enter second values:";
    cin >>second;
    min = (first<second)?first:second;
    cout<<"/n entered values" <<min<<"is smaller";
    return 0;
}