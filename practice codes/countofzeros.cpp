#include<iostream>
using namespace std;
int countzeros(int n) { 
  
    
  if (n == 0) 
    return 1;
    if(n/10==0) return 0;
    
  if (n%10 == 0) 
    return 1 + countzeros(n/10);
    

    return countzeros(n/10);
    }
int main(){
    int ans=countzeros(10204);
    cout<<ans<<endl;
}