#include<iostream>
using namespace std;

int f(int n){
    if(n <= 1){
        return n;
    }
    int sl = f(n-1),ld = f(n-2);
    return sl + ld;
}

int main(){
    int n;
    cin>>n;
    int res = f(n);
    cout<<"Fibo : "<<res<<endl;
    return 0;
}
