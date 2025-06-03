#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool checkIfArrayElmsAreConsecutive(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        // cout << "max: " << max << endl;
        // cout << "min: " << min << endl;
        while (min <= max) {
            bool isFound = false;

            for (int i = 0; i < nums.size(); i++) {
                // cout << nums[i] << ":" << min << endl;
                // bool is = nums[i] == min;
                // cout << is << endl;

                if (nums[i] == min) {
                    isFound = true;
                    break;
                }
            }
            // cout << "min: " << min << " isFound: " << isFound << endl;
            if (!isFound) {
                return false;
            }
            min++;
        }

        return true;
    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 4, 3, 1, 2 };
    bool res = s.checkIfArrayElmsAreConsecutive(nums);
    cout << res << endl;

    /*
        Input:
           [4, 2, 1, 3, 5]
    */
    /*
        Output:
           true
     */


    return 0;
}