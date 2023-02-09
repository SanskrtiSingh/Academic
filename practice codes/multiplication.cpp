#include<iostream>
using namespace std;
int multiplication(int m, int n) { 
  
  if(n == 1) 
    return m; 
  else
    return m + multiplication(m, n-1); 
}
int main(){
    int ans=multiplication(3,5);
    cout<<ans<<endl;
}