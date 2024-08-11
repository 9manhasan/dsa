#include <iostream>
#include <vector>
#include <map>
using namespace std;
// using hashing
int majorityElement(vector<int> &nums)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second > (nums.size() / 2))
        {
            return it.first;
        }
    }
    return -1;
}

// using moores voting algorithm
int majorityElementOptimised(vector<int> arr)
{
    // TODO: implement
    int n = arr.size();
    int el;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // cnt will get reduce if the same element didn't come.
        if (cnt == 0)
        {
            cnt = 1;
            el = arr[i];
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int check  = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] == el) check++;
    }
    if(check > (n/2)) return el;
    return -1;
}
int main()
{
    vector<int> nums = {3, 2, 3};
    int res = majorityElementOptimised(nums);
    cout << res << endl;
    return 0;
}