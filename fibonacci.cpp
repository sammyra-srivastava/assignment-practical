#include <iostream> 
using namespace std; 
class fibonacci 
{ 
	int k1,k2; 
	public: 
	fibonacci() 
	{ 
		cout<<"Enter the first no : ";
        cin>> k1;
        cout<<"Enter the second no: ";
        cin>> k2;
	} 
	void series(int n) 
	{ 
		int i,next; 
		cout << k1 << " " << k2 << " " ; 
		for(i=1; i<= n-2; i++) 
		{ 
			next = k1 + k2; 
			cout << next << " " ; 
			k1 = k2; k2 = next; 
		} 
	} 
}; 
int main() 
{ 
	fibonacci no; 
	int n; 
	cout << "FIBONACCI SERIES " << endl ; 
	cout << "How many numbers do you want ? "; 
	cin >> n; 
	no.series(n); 
} 