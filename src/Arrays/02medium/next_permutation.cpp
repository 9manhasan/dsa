#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int breakpoint = -1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            breakpoint = i;
            break;
        }
    }
    if (breakpoint == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    for (int i = nums.size() - 1; i > breakpoint; i--)
    {
        if (nums[i] > nums[breakpoint])
        {
            swap(nums[i], nums[breakpoint]);
            break;
        }
    }
    reverse(nums.begin() + breakpoint + 1, nums.end());
}
int main()
{
    vector<int> nums = {1, 3, 2};
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}