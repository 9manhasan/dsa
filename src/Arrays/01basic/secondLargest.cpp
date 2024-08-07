#include<iostream>
#include<climits>
using namespace std;

int sl(int arr[], int n) {
    // TODO: implement
    int l = INT_MIN;
    int sl = l;
    for (int i = 0; i < n; i++) {
        if(arr[i]  > l){
            sl = l;
            l = arr[i];
        } else if(arr[i] > sl && arr[i] != l){
            sl = arr[i];
        }
    }
    return sl;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int res = sl(arr,n);
    cout<<res<<endl;
    return 0;
}