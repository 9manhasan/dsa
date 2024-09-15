#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        // Remove duplicates for the first number
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});

                // Remove duplicates for the second number
                while (j < k && nums[j] == nums[j + 1])
                    j++;
                j++;
                // Remove duplicates for the third number
                while (j < k && nums[k] == nums[k - 1])
                    k--;
                k--;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 2, -2, 1};
    vector<vector<int>> ans = threeSum(nums);

    for (auto &triplet : ans)
    {
        for (auto &num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
