#include <iostream>
using namespace std;

void func(int a[]) {
    a[0]=2;
    cout << sizeof(a)<< endl;
}

int main() {
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a);
    cout<<a[0];
    cout<<size<<endl;
    func(a);
    cout<<a[0];
}