#include <iostream>
#include <vector>
#include <climits>
#include <map>
using namespace std;

// using prefix sum
int subarraySum(vector<int> &nums, int k)
{
    map<int, int> mp;
    int preSum = 0, cnt = 0;
    mp[0] = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        preSum += nums[i];
        int remove = preSum - k;
        cnt += mp[remove];
        mp[preSum] += 1;
    }
    return cnt;
}
// using two loops
int subarraySumBrute(vector<int> &nums, int k)
{
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            if (sum == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> nums = {3, 1, 2, 4};
    int k = 6;
    int res = subarraySum(nums, k);
    cout << res << endl;
    return 0;
}