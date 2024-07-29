#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
    cout<<endl;
}

void reverseArr(int arr[], int s, int e){
    if(s < e){
        swap(arr[s],arr[e]);
        reverseArr(arr,s+1,e-1);
    }

}

int main(){
    int n=5;
    int arr[] = {5,4,3,2,1};
    reverseArr(arr,0,n-1);
    printArr(arr,n);
    return 0;
}
