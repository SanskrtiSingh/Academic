#include <bits/stdc++.h>
using namespace std;
int lastIndex(int*arr, int size,int x){
    if(size==0) return -1;
    if(arr[size-1]==x) return size-1;
    return(arr,size-1,x);
}
   
int main() {
    int arr[]={1,1,2,3,7,7};
 int ans=lastIndex(arr,6,7);
 cout<<ans<<endl;
  
    return 0;
}