#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

//TC -> O(N*logN) + O(N*2)
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	int n = arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	for(int i = 0; i < n;i++){
		int start = arr[i][0];
		int end = arr[i][1];
		if(!ans.empty() && end <= ans.back()[1]){
			continue;
	 	}
		for(int j = i + 1; j < n; j++){
			if(arr[j][0] <= end){
				end = max(end,arr[j][1]);
			} else{
				break;
			}
		}
		ans.push_back({start,end});
	}
	return ans;
}
vector<vector<int>> mergOverOptimal(vector<vector<int>> &nums){
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    for(int i = 0; i < n;i++){
        if(ans.empty() || nums[i][0] > ans.back()[1]){
            ans.push_back(nums[i]);
        }
        else{
            ans.back()[1] = max(ans.back()[1],nums[i][1]); ;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> nums = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> ans = mergOverOptimal(nums);
    for (auto &i : ans)
    {
        for (auto &s : i)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}
