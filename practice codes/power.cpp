
#include <bits/stdc++.h>
using namespace std;
int power(int x,int y){
      if(y==0){
        return 1;
      }
      return x*power(x,y-1);
}
int main() {
    int ans =power(3,5);
   cout <<ans<<endl;
    return 0;
}
