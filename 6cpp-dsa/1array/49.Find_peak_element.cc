#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakElmIdxGreaterThanNeighbors(vector<int>& nums) {
        int max = nums[0];
        int maxIdx = 0;

        for (int i = 1; i < nums.size(); i++) {
            // cout << i << endl;
            if (nums[i] > max) {
                // cout << i << endl;
                max = nums[i];
                maxIdx = i;
            }
        }
        return maxIdx;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 1, 3, 4, 2, 1, 20 };
    int res = s.peakElmIdxGreaterThanNeighbors(nums);
    cout << res << endl;

    return 0;
}