#include <bits/stdc++.h> 
using namespace std; 

double geometricSum(int k) 
{ 
	if (k == 0) 
		return 1; 

	return 1+0.5*geometricSum(k-1); 

	 
} 

int main() 
{ 
	int k;
	cin>>k;
    cout <<fixed<<setprecision(5); 
	cout <<geometricSum(k)<< endl; 

	return 0; 
}