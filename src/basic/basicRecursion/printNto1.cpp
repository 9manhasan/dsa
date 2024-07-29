#include<iostream>
using namespace std;

void func(int i, int n){
    if(i>n){
        return;
    }
    cout<<n<<" ";
    func(i,n-1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    func(1,n);
    cout<<endl;
    return 0;
}
