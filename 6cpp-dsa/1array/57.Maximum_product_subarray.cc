#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int maxProductSubarray(vector<int>& nums) {
        // int prevProduct = 1;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i; j < nums.size(); j++) {
        //         int currProduct = 1;
        //         for (int k = i; k <= j; k++) {
        //             currProduct *= nums[k];
        //         }
        //         prevProduct = max(currProduct, prevProduct);
        //     }
        // }

        // return prevProduct;

        int maxEnding = nums[0];
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            maxEnding = max(maxEnding * nums[i], nums[i]);
            res = max(res, maxEnding);
        }

        return res;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 2,3,-2,4 };
    int res = s.maxProductSubarray(nums);
    cout << res << endl;

    /**
     * Input:
     * = { 2,3,-2,4 }
     *
     * Expected Output:
     * = 6
     */

    return 0;
}