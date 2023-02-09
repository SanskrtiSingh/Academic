#include <bits/stdc++.h>
using namespace std;
int firstIndex(int*arr, int n,int x,int si=0){
    if(arr[si]==x) return si;
    if(si==n) return -1;

    return firstIndex(arr,n,x,si+1);
    
}
   
int main() {
    int arr[]={1,1,2,3,4,1};
 int ans=firstIndex(arr,6,2);
 cout<<ans<<endl;
  
    return 0;
}