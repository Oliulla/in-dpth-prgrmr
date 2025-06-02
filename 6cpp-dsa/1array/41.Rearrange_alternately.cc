#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> reArrangeAlternately(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i += 2) {

            int max = nums[i];
            int maxIdx = i;
            int min = nums[i];
            int minIdx = i;

            // cout << i << endl;

            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] > max) {
                    max = nums[j];
                    maxIdx = j;
                }
                if (nums[j] < min) {
                    min = nums[j];
                    minIdx = j;
                }
            }

            // cout << max << ":" << maxIdx << endl;
            // cout << min << ":" << minIdx << endl;


            // {6, 1, 5, 2, 3, 4 }
                // when i = 3
                // MAX = 4
                // MIN = 3
                // MAX IDX = 5
                // MIN IDX = 4
            int tempMx = nums[i]; // 3
            int tempMn = nums[i + 1]; // 4
            nums[i] = max; // {6, 1, 5, 2, 4, _ }
            nums[i + 1] = min; // {6, 1, 5, 2, 4, 3 }
            // nums[maxIdx] = tempMx;
            if (i < nums.size() - 2) {
                if (i == minIdx) {
                    nums[maxIdx] = tempMn;
                }
                else {
                    nums[maxIdx] = tempMx;
                    nums[minIdx] = tempMn;
                    // {6, 1, 5, 2, 3, 4 }
                }
            }

            // int tempMn = nums[i + 1];
            // nums[i + 1] = min;
            // nums[maxIdx] = min;

        }

        // for (int num : nums) {
        //     cout << num << endl;
        // }

        return nums;
    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 1, 2, 3, 4, 5, 6 };
    // {6, 1, 5, 2, 3, 4}
    s.reArrangeAlternately(nums);
    for (int num : nums) {
        cout << num << endl;
    }

    /*
        Input:
           [1, 2, 3, 4, 5, 6]
    */
    /*
        Output:
           [6, 1, 5, 2, 4, 3]
     */


    return 0;
}