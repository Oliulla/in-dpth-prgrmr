#include<iostream>
#include<vector>
#include "print.h"
using namespace std;

class Solution {
public:
    int trappingRainWaterCount(vector<int>& nums) {
        int len = nums.size();
        int res = 0;

        for (int i = 1; i < len - 1; i++) {

            int left = nums[i];
            for (int j = 0; j < i; j++)
                left = max(left, nums[j]);

            int right = nums[i];
            for (int j = i + 1; j < len; j++)
                right = max(right, nums[j]);

            res += (min(left, right) - nums[i]);
        }

        return res;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 0,1,0,2,1,0,1,3 };
    int res = s.trappingRainWaterCount(nums);
    print(res);

    /**
     * Input:
     * = [0,1,0,2,1,0,1,3]
     *
     * Expected Output:
     * = 6
     */

    return 0;
}