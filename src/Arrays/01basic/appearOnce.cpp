#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int n = nums.size();
    int xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ nums[i];
    }
    return xor1;
}
int main()
{
    vector<int> nums = {1, 3, 1, 2, 2};
    int ans = singleNumber(nums);
    cout << ans << endl;
    return 0;
}