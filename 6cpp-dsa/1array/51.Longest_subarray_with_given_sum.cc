#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int longestSubarrayWithGivenSum(vector<int>& nums, int k) {
        int longestSub = 0;
        for (int i = 0; i < nums.size(); i++) {

            for (int j = i; j < nums.size(); j++) {
                int subsum = 0;
                int size = 0;

                for (int l = i; l <= j; l++) {
                    subsum += nums[l];
                    size++;
                }

                if (subsum == k) {
                    longestSub = max(size, longestSub);
                }

            }
        }
        return longestSub;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 1, 9, 1, 4, 5 };
    int k = 2;
    int res = s.longestSubarrayWithGivenSum(nums, k);
    cout << res << endl;

    return 0;
}