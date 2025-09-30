#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val;  // XOR cancels out duplicates
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 1, 2, 1, 2}; // Example input
    cout << sol.singleNumber(nums) << endl; // Expected output: 4
    return 0;
}
