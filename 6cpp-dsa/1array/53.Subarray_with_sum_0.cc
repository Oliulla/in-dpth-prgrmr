#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int subArrayWithSumZero(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;

            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];

                if (sum == 0)
                    return true;
            }
        }
        return false;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 4, 2, -3, 1, 6 };
    int res = s.subArrayWithSumZero(nums);
    switch (res)
    {
    case true:
        cout << "true" << endl;
        break;

    default:
        cout << "false" << endl;
        break;
    }

    /**
     * Expected Output:
     * = true
     */

    return 0;
}