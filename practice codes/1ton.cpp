
#include <bits/stdc++.h>
using namespace std;
void print(int n){
    if (n>4000)
    return;
    printf("%d",n);
    print(2*n);
     printf("%d",n);
}
int main(){
    print(1000);
    getchar();
    return 0;
}