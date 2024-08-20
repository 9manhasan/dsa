#include <iostream>
#include <vector>
using namespace std;


void matrixSet(vector<vector<int>> &matrix, int n,int m)
{
    //will use this loop to mark the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(matrix[i][j] == 0){
                
            }
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    matrixSet(matrix, n, m);
    cout << "Final matrix" << endl;
    for (auto i : matrix)
    {
        for (auto second : i)
        {
            cout << second << " ";
        }
        cout << endl;
    }
    return 0;
}
