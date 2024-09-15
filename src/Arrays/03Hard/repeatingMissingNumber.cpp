#include <iostream>
#include <vector>
using namespace std;
//solved using Math solution TC -> O(N) SC -> O(1)
vector<int> findTwoElementOptimsed(vector<int> &a){
    long long n = a.size(); // size of the array

    // Find Sn and S2n:
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    // Calculate S and S2:
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }

    //S-Sn = X-Y:
    long long val1 = S - SN;

    // S2-S2n = X^2-Y^2:
    long long val2 = S2 - S2N;

    //Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;

    //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    // Here, X-Y = val1 and X+Y = val2:
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}

//solved using hashing TC -> O(N^2) SC -> O(N)
vector<int> findTwoElement(vector<int>& arr)
{
    const int n = arr.size();
    vector<int> hsh(n + 1, 0);
    int duplicate = -1;
    int missing = -1;

    // Count occurrences
    for (int i = 0; i < n; ++i) {
        hsh[arr[i]]++;
    }

    // Find the duplicate and missing numbers
    for (int i = 1; i <= n; ++i) {
        if (hsh[i] > 1) {
            duplicate = i;
        } else if (hsh[i] == 0) {
            missing = i;
        }
    }

    return {duplicate, missing};
}

int main() {
    vector<int> nums = {3, 1, 2, 5, 3};
    vector<int> ans = findTwoElementOptimsed(nums);
    
    for(int i : ans) {
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}
