#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_set>
using namespace std;

int longestConsecutiveOptimal(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
int longestConsecutive(vector<int> &nums)
{
    // Edge case: Empty vector
    if (nums.empty())
        return 0;

    // Sort the array
    sort(nums.begin(), nums.end());

    int longest = 1;     // To store the longest sequence
    int cnt_current = 1; // To store the current sequence length

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            // Skip duplicate elements
            continue;
        }
        else if (nums[i] == nums[i - 1] + 1)
        {
            // If current element is consecutive, increment the count
            cnt_current++;
        }
        else
        {
            // Reset count for new sequence
            longest = max(longest, cnt_current);
            cnt_current = 1;
        }
    }

    // Final comparison to ensure longest sequence is returned
    longest = max(longest, cnt_current);

    return longest;
}
int main()
{
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int res = longestConsecutiveOptimal(nums);
    cout << res << endl;
    return 0;
}
