#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// brute is to just sort it using sort function tc -> O(NlogN)
void sortColors(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}
// optimal approach dnf algorithm tc -> O(N)
void sortGod(vector<int> &arr)
{
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> v = {2, 0, 2, 1, 1, 0};
    // output : 0,0,1,1,2,2
    sortGod(v);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}