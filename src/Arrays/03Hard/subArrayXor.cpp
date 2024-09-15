#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

//optimised solution using hashmap TC -> O(N)
int subarraysWithSumK(vector < int > a, int b) {
    //write code here
    int xr = 0;
    map<int,int> mpp;
    mpp[xr]++;
    int cnt = 0;
    for(int i = 0; i < a.size();i++)
    {
        xr = xr ^ a[i];
        int x = x ^ b;
        if(mpp.find(x) != mpp.end())
        {
            cnt += mpp[x];
        }
        //adding xor to map;
        mpp[x]++;
    }
    return cnt;
}

//unoptimised solution with TC -> O(N^2)
int subarraysWithSumKBrute(vector < int > a, int b) {
    // Write your code here
    int n = a.size();
    int current_cnt = 0;
    for (int i = 0; i < n; i++) {
        int xor1 = 0;
        for (int j = i; j < n; j++) {
            xor1 = xor1 ^ a[j];
            if(xor1 == b) current_cnt++;
        }
    }
    return current_cnt;
}

int main() {
    vector<int> nums = {4,2,2,6,4};
    int n = 6;
    int cnt = subarraysWithSumK(nums,n);
    cout<<cnt<<endl;
    return 0;
}