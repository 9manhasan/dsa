#include<iostream>
#include<cmath>
using namespace std;

void revNum(int n){
    int res = 0;
    while (n != 0)
    {
        /* code */
        int l = n % 10;
        res = (res * 10) + l;
        n/=10;
    }
    cout<<res<<endl;
}
int main(){
    int n;
    cin>>n;
    revNum(n);
    return 0;
}