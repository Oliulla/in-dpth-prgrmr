#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countOnesInBinarySortedArr(vector<int>& nums) {
        int countOnes = 0;
        int i = 0;
        int len = nums.size();
        bool loopCondition = true;

        if (nums[len - 1] == 1) {
            i = len - 1;
        }
        while (loopCondition) {

            if (nums[i] == 1) {
                countOnes++;
            }
            else {
                break;
            }

            if (nums[len - 1] == 1) {
                i--;
            }
            else {
                i++;
            }

            if (i == -1 || i == len) {
                loopCondition = false;
            }
        }
        return countOnes;
    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 0, 0, 1, 1 };
    int res = s.countOnesInBinarySortedArr(nums);
    cout << res << endl;

    /*
        Input:
           [1, 1, 1, 0, 0]
    */
    /*
        Output:
           3
     */


    return 0;
}