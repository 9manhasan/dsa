#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;    
    int left = low;     
    int right = mid + 1; 


    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    //for any remaining element in left side.
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    //for any remaining element in right side.
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    //we use this to remerge the temp array into the main array.
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void merge_sort(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    printArr(arr, n);
}
