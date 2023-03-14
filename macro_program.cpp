#include <iostream>

using namespace std;


#define PI 3.1416
#define AREA(r) r*r*PI

int main()
{
	float radius = 7;
	float result;
	
	
	result=AREA(radius);
	
	cout<<"Area is "<<result;
	return 0;
}