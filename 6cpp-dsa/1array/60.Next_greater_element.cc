#include<iostream>
#include<vector>
#include "print.h"
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nextGreaterArr;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size();) {
                if (nums[j] > nums[i]) {
                    nextGreaterArr.push_back(nums[j]);
                    break;
                }
                else {
                    j++;
                }
            }
            if (i == nums.size() - 1) nextGreaterArr.push_back(-1);
        }
        return nextGreaterArr;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 4,5,2,10 };
    vector<int> res = s.nextGreaterElements(nums);
    // for (int num : res) {
    //     cout << num << endl;
    // }
    print(res);

    /**
     * Input:
     * = { 4,5,2,10 }
     *
     * Expected Output:
     * = { 5,10,10,-1 }
     */

    return 0;
}