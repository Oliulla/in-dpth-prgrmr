#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> slidingWindowMaximum(vector<int>& nums, int k) {
        int i = -1;
        vector<int> res;
        while (++i < nums.size() - 2)
        {
            int maxOne = nums[i];
            for (int j = i + 1; j <= i + 2; j++) {
                if (nums[j] > maxOne) {
                    maxOne = nums[j];
                }
            }
            res.push_back(maxOne);
        }
        return res;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 1,3,-1,-3,5,3,6,7 };
    int k = 3;
    vector<int> res = s.slidingWindowMaximum(nums, k);
    for (int num : res) {
        cout << num << endl;
    }

    /**
     * Expected Output:
     * = [3,3,5,5,6,7]
     */

    return 0;
}