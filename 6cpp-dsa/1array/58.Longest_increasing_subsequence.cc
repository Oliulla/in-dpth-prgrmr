#include<iostream>
#include<vector>
#include<climits>
using namespace std;


class Solution {
public:
    int longestIncreasingSubsequence(vector<int>& nums) {
        int curr = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (curr < nums[i]) {
                count++;
            }
            curr = nums[i];
        }
        return count;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 10,9,2,5,3,7,101,18 };
    int res = s.longestIncreasingSubsequence(nums);
    cout << res << endl;

    /**
     * Input:
     * = { 10,9,2,5,3,7,101,18 }
     *
     * Expected Output:
     * = 4
     */

    return 0;
}