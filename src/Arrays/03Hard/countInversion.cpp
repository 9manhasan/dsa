#include<iostream>
#include<vector>

using namespace std;

// Merges two subarrays of arr[] and counts inversions.
int merge(vector<int> &arr, int low, int mid, int high, int &cnt) {
    vector<int> temp; // temporary array
    int left = low;   // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr

    // Merging two halves in sorted order and counting inversions
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); // Inversions counted here
            right++;
        }
    }

    // If there are any remaining elements in the left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If there are any remaining elements in the right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back into the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt;
}

// Function to implement merge sort and count inversions
int mergeSort(vector<int> &arr, int low, int high, int &cnt) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid, cnt);      // Sort left half
        mergeSort(arr, mid + 1, high, cnt); // Sort right half
        merge(arr, low, mid, high, cnt);    // Merge both halves and count inversions
    }
    return cnt;
}

// Function to count inversions using merge sort
int inversionCountOptimal(vector<int> &arr) {
    int cnt = 0;
    return mergeSort(arr, 0, arr.size() - 1, cnt);
}

int main() {
    vector<int> nums = {5, 4, 3, 2, 1};  // Using int here for consistency
    int res = inversionCountOptimal(nums);
    cout << res << endl;  // Output should be the number of inversions
    return 0;
}

