
#include <bits/stdc++.h>
using namespace std;

void oneTON(int num){
    if(num==0)return;
    oneTON(num-1);
    cout<<num<<endl;
}
void nTo1(int num){
    if(num==0){
        return;
    }
    cout<<num<<endl;
    nTo1(num-1);
}
int main() {
  oneTON(5);
    return 0;
}
