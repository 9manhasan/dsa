#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralFunc(vector<vector<int>> nums)
{
    vector<int> ans;
    int n = nums.size();
    int m = nums[0].size();
    // four pointers
    int t, b, r, l;
    t = 0;
    l = 0;
    b = m - 1;
    r = n - 1;
    while (t <= b && l <= r)
    {
        // right
        for (int i = l; i <= r; i++)
        {
            ans.push_back(nums[t][i]);
        }
        t++;
        // bottom
        for (int i = t; i <= b; i++)
        {
            ans.push_back(nums[i][r]);
        }
        r--;
        // left
        if (t <= b)
        {
            for (int i = r; i >= l; i--)
            {
                ans.push_back(nums[b][i]);
            }
            b--;
        }
        // top
        if (l <= r)
        {
            for (int i = b; i >= t; i--)
            {
                ans.push_back(nums[i][l]);
            }
            l++;
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> nums = {{1, 2, 3}, {8,9,4}, {7,6,5}};
    vector<int> ans = spiralFunc(nums);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
