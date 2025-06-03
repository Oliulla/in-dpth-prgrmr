#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrOfOnesNdZeros(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            // for (int j = i + 1; j < nums.size(); j++) {
            //     if (nums[i] > nums[j]) {
            //         int temp = nums[j];
            //         nums[j] = nums[i];
            //         nums[i] = temp;
            //     }
            // }

            if (nums[i] < 0) {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                j++;
            }
        }

        return nums;
    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 1, -1, 3, -2, 4 };
    s.sortArrOfOnesNdZeros(nums);
    for (int num : nums) {
        cout << num << endl;
    }

    /*
        Input:
           [1, -1, 3, -2, -4]
    */
    /*
        Output:
           [-1, -2, 3, 1, 4]
     */


    return 0;
}