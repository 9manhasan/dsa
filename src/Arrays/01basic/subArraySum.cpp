#include<iostream>
#include<vector>
using namespace std;
//use two pointers for positive only
int subLongTwoPointer(vector<int> nums,long long t){
    int l = 0; //left pointer
    int r = 0; //right pointer
    long long sum = nums[0]; //to get sum
    int len = -1; //length of the sub array
    int n = nums.size(); //size of array
    //will run the array from 0 to n
    while(r < n)
    {
        //if sum excedd the target will subtract the array and,
        //and move the array from left.
        while(l<= r &&  sum > t)
        {
            sum -= nums[l];
            l++;
        }
        //whenever the sum is equal to t will calculate its length
        if(sum == t)
        {
            int rem = r-l+1;
            len = max(len,rem);
        }
        //to add elements from 0 to n 
        r++;
        if(r<n) sum += nums[r];

    }
    return len;
}
int subLong(vector<int> nums,long long t){
    int cnt = 0;
    long long sum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += nums[j];
            if(sum == t)
            {
                cnt = max(cnt,j-i+1);
            }
        }
    }
    return cnt;
}
int main() {
    vector<int> v = {1,1,1,1,2,3,2,2,1,3,1,3,1,1,1};
    int target = 6;
    int res = subLongTwoPointer(v,target);
    cout << res << endl;
    return 0;
}