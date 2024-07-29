#include<iostream>
using namespace std;

void Sum(int i,int n){
    if(i<1){
        cout<<n<<endl;
        return;
    }
    Sum(i-1,n+i);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    Sum(n,0);
    return 0;
}
