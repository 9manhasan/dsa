#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeOptimised(vector<int> nums)
{
    int posIndex = 0;
    int negindex = 1;
    // fills with zero
    vector<int> ans(nums.size(),0);

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            ans[negindex] = nums[i];
            negindex += 2;
        }
        else
        {
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }
    return ans; 
}

void rearrange(vector<int> &nums)
{
    vector<int> ps;
    vector<int> ng;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            ps.push_back(nums[i]);
        }
        else
        {
            ng.push_back(nums[i]);
        }
    }
    int psIndex = 0;
    int ngIndex = 0;
    // adding back into the main array
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0 && psIndex < ps.size())
        {
            nums[i] = ps[psIndex];
            psIndex++;
        }
        else if (ngIndex < ng.size())
        {
            nums[i] = ng[ngIndex];
            ngIndex++;
        }
    }
}
void arrPrint(vector<int> n)
{
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v = {1, 2, -3, -1, -2, -3};
    vector<int> rearranged = rearrangeOptimised(v);  // Store the result
    arrPrint(rearranged);  // Print the rearranged vector
    return 0;
}
