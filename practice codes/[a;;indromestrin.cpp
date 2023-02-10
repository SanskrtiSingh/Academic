#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool checkPalindrome( char input[]) 
    {
    int i=0,size=0;
    while(input[i++]!='\0')size++;
    if(size==0)
    return true;
    if(input[0]!=input[size-1]) return false;
    input[size-1]='\0';
    return checkPalindrome(input+1);
}
	
int main() {
	char input[50];
	cin>>input;
    if(checkPalindrome(input)) cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
	
	return 0;
}