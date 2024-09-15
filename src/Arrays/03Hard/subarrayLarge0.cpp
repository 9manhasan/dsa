#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// largest subarray with sum 0
int maxLen(vector<int> &nums, int n)
{
    unordered_map<int,int> mpp; 
    int sum = 0; // Initialize sum
    int maxi = 0; // Initialize maximum length
    for (int i = 0; i < n; i++) {
        sum += nums[i]; // Update the sum
        // If sum is 0, update the max length
        if(sum == 0) {
            maxi = i + 1;
        } 
        // If sum has been seen before, calculate the length of subarray
        else if(mpp.find(sum) != mpp.end()) {
            maxi = max(maxi, i - mpp[sum]);
        } 
        // Otherwise, store the sum with its index
        else {
            mpp[sum] = i;
        }
    }
    return maxi; // Return the maximum length of the subarray
}
int main() {
    vector<int> nums = {9, -3, 3, -1, 6, -5}; // Sample input
    int n = nums.size();
    int maxi = maxLen(nums, n);
    cout << maxi << endl; // Output the result
    return 0;
}
