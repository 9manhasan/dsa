#include<iostream>
#include<algorithm>
using namespace std;

void BubbleSort(int arr[] , int n){
    int didSwap;
   for (int i = n-1; i >= 1; i--) {
        didSwap = 0;
        for (int j = 0; j <= i-1; j++) {
            if(arr[j] >arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0)
        {
            break;
        }
   } 
}

void printArr(int arr[],int n)
{
    for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the arrays element : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting : "<<endl;
    printArr(arr,n);
    cout<<"After Sorting : "<<endl;
    BubbleSort(arr,n);
    printArr(arr,n);
    return 0;
}
