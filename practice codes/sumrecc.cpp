#include <iostream>
using namespace std;
int sum(int n) {
   if(n == 1)
   return 1;
else
 
   return n + sum(n-1);
}
int main() {
   int n = sum(5);
   cout<<n<<endl;
   return 0;
}