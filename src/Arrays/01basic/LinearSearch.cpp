#include<iostream>
using namespace std;


int ls(int arr[], int n,int t)
{
    int ans = -1;
    for (int i = 0; i < n; i++) {
        if(t == arr[i]){
            ans = i;
            break;
        }
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;  
    int res = ls(arr,n,t);
    cout << res << endl;
    return 0;
}