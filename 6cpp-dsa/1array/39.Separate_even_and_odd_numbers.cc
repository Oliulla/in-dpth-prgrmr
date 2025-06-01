#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> separateEvenNdOddNums(vector<int>& nums) {
        vector<int> evnOddNums;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i == 0 && nums[j] % 2 == 0) {
                    evnOddNums.push_back(nums[j]);
                }
                if (i == 1 && nums[j] % 2 != 0) {
                    evnOddNums.push_back(nums[j]);
                }
            }
        }

        return evnOddNums;
    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 1, 2, 3, 4, 6, 8, 11 };
    vector<int> results = s.separateEvenNdOddNums(nums);
    for (int num : results) {
        cout << num << endl;
    }


    /*
        Input:
        [1, 2, 3, 4]
    */
    /*
        Output:
         [2, 4, 1, 3]
    */

    return 0;
}