#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int l = arr[0];
    for (int i = 0; i <n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = l;
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    return 0;
}