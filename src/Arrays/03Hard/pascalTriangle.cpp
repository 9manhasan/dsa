#include<iostream>
#include<vector>
using namespace std;
//generating columns
vector<int> generateCol(int row)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int i = 1; i < row;i++)
    {
        ans = ans*(row-i);
        ans = ans/i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
//optimsied way
vector<vector<int>> generate(int numRows)
{
   vector<vector<int>>ans;
   //generating rows
    for(int row = 0; row<numRows; row++)
    {
        ans.push_back(generateCol(row+1));
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = generate(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
