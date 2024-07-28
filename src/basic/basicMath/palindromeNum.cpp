#include<iostream>
#include<cmath>
using namespace std;


void revNum(int n){
    int og = n;
    int res = 0;
    while (n != 0)
    {
        int l = n % 10;
        res = (res * 10) + l;
        n/=10;
    }
    if(og == res){
        cout<<"it's a palindrome number."<<endl;
    }else{
        cout<<"not a palindrome number."<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    revNum(n);
}
