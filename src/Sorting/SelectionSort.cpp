#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    int mini;
for (int i = 0; i < n-1; i++) {
    mini = i;
    for (int j = i; j < n; j++) {
        if(arr[j] < arr[mini]){
            mini = j;
        }
    }    
    if(mini != i)
    {
        swap(arr[i], arr[mini]);
    }
}

}
void printarr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter thea array size : " << endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }   
    cout << "Before sort : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After Sort : " << endl;
    selection_sort(arr,n); 
    printarr(arr,n);
    return 0;
}
