#include<iostream>
using namespace std;


void print(int i,int n){
    //base condition
    if(i>n){
        return;
    }
    cout<<"Lol"<<" ";
    print(i+1,n);
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    print(1,n);
    cout<<endl;
    return 0;
}
