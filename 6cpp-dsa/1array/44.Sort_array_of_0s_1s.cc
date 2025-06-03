#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrOfOnesNdZeros(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    nums[i] = 0;
                    nums[j] = 1;
                }
            }
        }
        return nums;
    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 1, 0, 0, 0, 1, 1 };
    s.sortArrOfOnesNdZeros(nums);
    for (int num : nums) {
        cout << num << endl;
    }

    /*
        Input:
           [0, 1, 0, 1, 1, 0]
    */
    /*
        Output:
           [0, 0, 0, 1, 1, 1]
     */


    return 0;
}