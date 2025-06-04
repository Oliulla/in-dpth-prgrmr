#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int equilibriumIndexOfArr(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            int leftSum = 0;
            int rightSum = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (j < i) {
                    leftSum += nums[j];
                }
                if (i < j) {
                    rightSum += nums[j];
                }
            }
            if (leftSum == rightSum) {
                return i;
            }
        }
        return 0;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { -7, 1, 5, 2, -4, 3, 0 };
    int res = s.equilibriumIndexOfArr(nums);
    cout << res << endl;
    return 0;
}