#include<iostream>
using namespace std;

bool palin(int i,string &s){
    int n  = s.size();
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return palin(i+1,s);
}

int main(){
    string s = "numan";
    cout<<palin(0,s)<<endl;
    return 0;
}
