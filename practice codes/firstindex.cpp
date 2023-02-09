#include <bits/stdc++.h>
using namespace std;
int firstIndex(int*arr, int n,int x){

    if(n==0) return-1;
    if(arr[0]==x) return 0;

     int ans=firstIndex(arr+1,n-1,x);


    if(ans==-1) return -1;

   return +1;

}
   
int main() {
    int arr[]={1,1,2,3,4,1};
 int ans=firstIndex(arr,6,2);
 cout<<ans<<endl;
  
    return 0;
}