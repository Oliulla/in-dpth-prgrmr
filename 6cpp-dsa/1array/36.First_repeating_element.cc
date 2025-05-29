#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int firstRepeatingElm(vector<int>& nums) {
        int repeatingElm = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return nums[i];
                }
            }
        }
        return repeatingElm;

    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 10, 5, 3, 4, 3, 5, 6 };
    int result = s.firstRepeatingElm(nums);

    cout << result << endl;

    /*
        Input:
        [10, 5, 3, 4, 3, 5, 6]
    */
    /*
         Output:
         5
     */
    return 0;
}