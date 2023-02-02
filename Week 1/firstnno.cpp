#include<iostream>
using namespace std;

int FirstN(int num){
    if(num==1){
        return 1;
    }

    return num+FirstN(num-1);
}
int main(){
    int ans=FirstN(5);
    cout<<ans<<endl;

    return 0;
}