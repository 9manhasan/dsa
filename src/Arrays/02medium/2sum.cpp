#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include<map>
using namespace std;

vector<int> twoSumHashMap(vector<int> nums, int t)
{
    int n = nums.size();
    map<int,int> mp;
    //will use first int as value and another int as index
    for (int i = 0; i < n; i++) {
        //get remaining to search for it in the hashmap.
        int rem = t - nums[i];
        if(mp.find(rem) != mp.end())
        {
            return {mp[rem], i};
        }
        //add the element with its index if not found.
        mp[nums[i]] = i;
    }
    return {-1,-1};
}

vector<int> twoSum(vector<int> nums, int t)
{
    vector<int> temp;
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    sort(nums.begin(), nums.end());
    while (left < right)
    {
        if (nums[left] + nums[right] != t)
        {
            left++;
            right--;
        }
        else
        {
            temp.push_back(left);
            temp.push_back(right);
            return temp;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> nums = {2, 6, 5, 8, 11};
    int t = 14;
    vector<int> res = twoSumHashMap(nums, t);
    for (auto it : res)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}