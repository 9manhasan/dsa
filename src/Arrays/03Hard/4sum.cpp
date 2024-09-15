#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    // sorting then using 2 data structures to get unique list and return it with 4 pointers as well
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    set<vector<int>> unique_ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            if (i > 0 && nums[j] == nums[j - 1])
                continue;
            int left = j + 1;
            int right = n - 1;
            while (left < right)
            {
                long long sum;
                sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum < target)
                {
                    left++;
                }
                else if (sum > target)
                {
                    right--;
                }
                else
                {
                    vector<int> quad = {nums[i], nums[j], nums[left], nums[right]};
                    if (unique_ans.find(quad) == unique_ans.end())
                    {
                        unique_ans.insert(quad);
                        ans.push_back(quad);
                    }
                    left++;
                    right--;
                    //removing duplicates
                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> ans = fourSum(nums, target);
    for (auto &i : ans)
    {
        for (auto &s : i)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}