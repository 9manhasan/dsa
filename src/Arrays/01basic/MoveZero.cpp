#include<iostream>
#include<utility>
using namespace std;

void move(int arr[], int n)
{
    //move zero to end using two pointer
    int pz = -1;
    //will get the latest position of zero.
    for (int i = 0; i < n; i++) {
        if(arr[i] == 0)
        {
            pz = i;
            break;
        }
    }

    for (int i = pz+1; i < n; i++) {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[pz]);
            pz++;
        }
    }

}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    move(arr,n);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    
    return 0;
}