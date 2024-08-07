#include<iostream>
#include<climits>
using namespace std;

int largest(int arr[], int n) {
    // TODO: implement
    int l = INT_MIN;
    for (int i = 0; i < n; i++) {
        if(arr[i] > l){
            l = arr[i];
        }
    }
    return l;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int res = largest(arr,n);
    cout<<res<<endl;
    return 0;
}