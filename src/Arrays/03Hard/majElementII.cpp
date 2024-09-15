#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int ele1 = INT_MIN, ele2 = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && (ele2 != nums[i])) {
                ele1 = nums[i];
                cnt1 = 1;
            } else if (cnt2 == 0 && (ele1 != nums[i])) {
                ele2 = nums[i];
                cnt2 = 1;
            } else if (ele1 == nums[i])
                cnt1++;
            else if (ele2 == nums[i])
                cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ans;
        // checking
        cnt1 = 0;
        cnt2 = 0;
        int mini = (int)(n / 3) + 1;
        for (auto i : nums) {
            if (i == ele1)
                cnt1++;
            if (i == ele2)
                cnt2++;
        }
        if (cnt1 >= mini)
            ans.push_back(ele1);
        if (cnt2 >= mini)
            ans.push_back(ele2);
        return ans;
    }

int main() {
    vector<int> nums = {1,2};
    vector<int> ans = majorityElement(nums);
    for(auto i : ans)
    {
        cout<< i << " ";
    }
    cout << endl;
    return 0;
}