#include <bits/stdc++.h>
using namespace std;
void oneTON(int num){
    if(num==0) return;
    oneTON(num-1);
    cout<<num;
}
   
int main() {
  oneTON(5);
  
    return 0;
}