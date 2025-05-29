#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int largestSumOfContiguousSubarray(vector<int>& nums) {
        // Kadane’s Approach
        int maxEnding = nums[0], res = nums[0];
        for (int i = 1; i < nums.size(); i++) {

            maxEnding = max(maxEnding + nums[i], nums[i]);
            res = max(res, maxEnding);

        }
        return res;


        // General Approach
        /*
        int prevSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                int currSum = 0;
                for (int k = i; k <= j; k++) {
                    currSum += nums[k];
                }
                if (currSum > prevSum) {
                    prevSum = currSum;
                }
            }
        }

        return prevSum;
       */
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { -2, 1, -3, 4, -1, 2 };
    int result = s.largestSumOfContiguousSubarray(nums);

    cout << result << endl;

    /*
        Output:
            5
    */

    return 0;
}