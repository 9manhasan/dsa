#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void reverse(vector<int> &v, int st, int e)
{
    while (st < e)
    {
        swap(v[st], v[e]);
        st++;
        e--;
    }
}

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    //reducing to get the minimum number if rotations
    k = k % n;
    reverse(nums, 0, n - 1); // reversing the whole array
    reverse(nums, 0, k - 1); // reversing the first half from 0 to kth element
    reverse(nums, k, n - 1); // reversign after kth to last element
    //printing
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter the k to rotate the array : ";
    cin >> k;
    rotate(a, k);
    return 0;
}