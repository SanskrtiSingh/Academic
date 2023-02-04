
#include <bits/stdc++.h>
using namespace std;
int count(int n){
    if(n==0) 
    return 0;
   
    return 1+ count(n/10);
}

int main(){
    int ans=count(438345);
    cout<<ans<<endl;
    return 0;
}