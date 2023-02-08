#include <bits/stdc++.h>
using namespace std;
int lastIndex(int*arr, int n,int x){
    if(n==0) return-1;
    int ans=lastIndex(arr+1,n-1,x);
    if(ans!=-1) return ans+1;
    else
    if(arr[0]==x) return 0;

    return -1;


}
   
int main() {
    int arr[]={1,2,3,1,5,6};
 int ans=lastIndex(arr,6,1);
 cout<<ans<<endl;
  
    return 0;
}