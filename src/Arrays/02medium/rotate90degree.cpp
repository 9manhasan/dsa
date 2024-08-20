#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void rotate_optimal(vector<vector<int>> &matrix)
{
    //transposing
    int n  = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    //reversing each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(),matrix[i].end()); 
    }
}
vector<vector<int>> rotateBrute(vector<vector<int>> matrix, int n)
{
    vector<vector<int>> ans(n, vector<int>(n, 0));
    // will put the element into its correct position.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // position in ans marix
            ans[j][n - 1 - i] = matrix[i][j];
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();
    rotate_optimal(matrix);
    for (auto it : matrix)
    {
        for (auto sc : it)
        {
            cout << sc << " ";
        }
        cout << "\n";
    }
    cout << endl;
    return 0;
}