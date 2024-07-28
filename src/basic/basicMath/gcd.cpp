#include <iostream>
using namespace std;
//recursiev fucntion using euclideans algo
//will do it until it returns 0 and the value.
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main() {
   int a , b;
   cout<<"Enter the values of a and b: "<<endl;
   cin>>a>>b;
   cout<<"GCD : "<< gcd(a, b)<<endl;
}