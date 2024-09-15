#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// optmised way.
void merge(vector<int> &nums1, int n, vector<int> &nums2, int m)
{
    // resizing the large array to later sort it
    nums1.resize(n + m);
    for (int i = 0; i < m; i++)
    {
        // to add elements after the already placed elements
        nums1[i + n] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());
    // clearing elements of second array (not neccessary)
    nums2.clear();
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    cout << "Before merge: ";
    for (int i = 0; i < m + n; i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl;

    merge(nums1, m, nums2, n);

    cout << "After merge: ";
    for (int i : nums1)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}