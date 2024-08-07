#include <iostream>
#include <vector>
using namespace std;
//works only for a single missing number
int missingNum(vector<int> &nums) {
    int n = nums.size();
    int xor1 = 0;
    int xor2 = 0;

    // XOR all numbers from 0 to n
    for (int i = 0; i <= n; i++) {
        xor1 = xor1 ^ i;
    }

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor2 = xor2 ^ nums[i];
    }

    // The missing number is the XOR of xor1 and xor2
    return xor1 ^ xor2;
}

int main() {
    vector<int> nums = {0, 1, 2, 4, 5}; // Example input
    int res = missingNum(nums);
    cout << res << endl;
    return 0;
}
