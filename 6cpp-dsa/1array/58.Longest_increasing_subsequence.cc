#include<iostream>
#include<vector>
#include<climits>
using namespace std;


class Solution {
public:
    int longestIncreasingSubsequence(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n, 1);
        int maxLen = 1;
        for (int i = 1; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            maxLen = max(maxLen, dp[i]);
        }

        // for (int num : dp) {
        //     cout << num << endl;
        // }
        return maxLen;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 10, 9, 2, 5, 3, 7, 101, 18 };
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