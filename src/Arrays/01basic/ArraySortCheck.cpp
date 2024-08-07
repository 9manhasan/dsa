#include<iostream>
using namespace std;

bool check(int arr[], int n){
    bool res;
    for (int i = 1; i < n; i++) {
     if(arr[i] < arr[i-1]) res = false;
     else res = true;
    }
    return res;
}
int main() {
  int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    bool res = check(arr,n);
    if(res) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}