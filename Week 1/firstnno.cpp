#include<iostream>
using namespace std;

int FirstNo(int num){
    if(num==1){
        return 1;
    }

    return num+FirstNo(num-1);
}
int main(){
    int ans=FirstNo(5);
    cout<<ans<<endl;

    return 0;
}