#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int> &arr, int n)
{
    if (n == 0)
    {
        return true;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0 && (i == 0 || arr[i + 1] == 0) && (i == arr.size() - 1 || arr[i - 1] == 0))
        {
            arr[i] = 1;
            n--;
            if (n == 0)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> v = {1, 0, 0, 0, 1};
    int n = 1;
    bool ans = canPlaceFlowers(v, n);
    cout << ans << endl;
    return 0;
}