#include<iostream>
#include<vector>
#include<climits>
#define ll long long
using namespace std;

//using kdanes algorithm
int subArray(vector<int> nums)
{
    ll sum = LLONG_MIN;
    ll tempSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        tempSum += nums[i];
        if(tempSum > sum) sum = tempSum;
        if(tempSum < 0) tempSum = 0;
    }
    return sum;
}

int main() {
       vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
        int res  =  subArray(nums);
        cout << res << endl;    
       return 0;
}