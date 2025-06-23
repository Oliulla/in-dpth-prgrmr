#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int longestConsecutiveSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int res = 1, count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) continue;

            if (nums[i] == nums[i - 1] + 1) {
                count++;
            }
            else {
                count = 1;
            }

            res = max(res, count);
        }
        return res;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 100,4,200,1,3,2 };
    int res = s.longestConsecutiveSubsequence(nums);
    cout << res << endl;

    /**
     * Input:
     * = { 100,4,200,1,3,2 }
     *
     * Expected Output:
     * = 4
     */

    return 0;
}