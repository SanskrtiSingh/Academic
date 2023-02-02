#include <bits/stdc++.h>
using namespace std;
int fact(int num){
    if(num==1){
        return 1;
    }
    return num*fact(num-1);
}
int main() {
    int ans= fact(5);
    cout<<ans<<endl;
 
    
	return 0;
}