#include<iostream>
using namespace std;


int func( int n){
    if(n <= 1) return n;
    return n * func(n-1);
}


int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int res = func(n);
    cout<<"fact : "<<res<<endl;
}
