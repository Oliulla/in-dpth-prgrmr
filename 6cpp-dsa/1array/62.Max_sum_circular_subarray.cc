#include<iostream>
#include<vector>
#include "print.h"
using namespace std;

class Solution {
public:
    int maxSumCircularSubArr(vector<int>& nums) {

        /**
        */
        int globMax = nums[0], globMin = nums[0];
        int currMax = 0, currMin = 0;
        int total = 0;

        for (int n : nums) {
            currMax = max(currMax + n, n);
            currMin = min(currMin + n, n);
            total += n;

            globMax = max(globMax, currMax);
            globMin = min(globMin, currMin);
        }
        if (globMax > 0) {
            int res = max(globMax, total - globMin);
            return res;
        }
        else return globMax;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { -3,-2,-3 };
    int res = s.maxSumCircularSubArr(nums);
    print(res);

    /**
     * Input:
     * = [1,-2,3,-2]
     *
     * Expected Output:
     * = 3
     */

    return 0;
}