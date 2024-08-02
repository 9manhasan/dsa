#include<iostream>
#include<vector>
using namespace std;
//declared array globally to precompute this easily
const int MAX_SIZE = 1e7;
int hsh[MAX_SIZE] = {0};

int main(){
    int n; 
    cin>>n;
    int arr[n];
    //taking array inputs
    cout<<"Give array : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    cout<<"precompute"<<endl;
    for(int i = 0;i<n;i++){
        hsh[arr[i]] += 1;
    }
    cout<<"Give query : "<<endl;
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<hsh[num]<<endl;
    }
    return 0 ;
}
