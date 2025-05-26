#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int largestSumOfContiguousSubarray(vector<int>& nums) {
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