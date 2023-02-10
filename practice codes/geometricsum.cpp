#include <iostream> 
using namespace std; 

double geometricSum(int k) 
{ 
	if (k == 0) 
		return 1; 

	double smallAns = geometricSum(k - 1); 

	return smallAns + 1.0 / (1 << k); 
} 

int main() 
{ 
	int k;
	cin>>k;
	cout << geometricSum(k) << endl; 
	return 0; 
}