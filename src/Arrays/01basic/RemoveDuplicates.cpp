#include<iostream>
#include<set>
using namespace std;

//brute force method to use set.
int rd(int arr[], int n){
    set<int> st;
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }
    return st.size();
}
//optimised way
int rdOptimised(int arr[], int n){
    int i = 0;
    for (int j = 1; i < n; i++) {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int res = rdOptimised(arr,n);
    cout<<res<<endl;
    return 0;
}