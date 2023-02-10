#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool isPalin(string s, int start, int end) {
	if(start >= end)
		return true;
	if(s[start] != s[end])
		return false;
	return isPalin(s, start+1, end-1);
}
int main() {
	string s;
	cin>>s;
	int n = s.length();
	bool result = isPalin(s, 0, n-1);
	if(result)
		cout << "true";
	else
		 cout << "false";
	return 0;
}