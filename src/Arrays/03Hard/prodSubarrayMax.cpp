#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProductBetter(vector<int> &nums)
{
    // TC -> O(n^2)
    int prod = 1, result = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        prod = nums[i];
        // for single digit elements
        result = max(prod, result);
        for (int j = i + 1; j < nums.size(); j++)
        {
            prod *= nums[j];
            result = max(result, prod);
        }
    }
    return result;
}
int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    // TC -> O(N)
    int ans = INT_MIN;
    int pre = 1, suff = 1;
    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1; 
        if (suff == 0)
            suff = 1; 
        pre *= nums[i];          // Prefix product from the start
        suff *= nums[n - i - 1]; // Suffix product from the end
        ans = max(ans, max(pre, suff));
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, -2, 3, -4};
    int res = maxProduct(nums);
    cout << res << endl;
}
