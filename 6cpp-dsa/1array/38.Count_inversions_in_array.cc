#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countInversionsInArray(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 5, 4, 3, 2, 1 };
    int res = s.countInversionsInArray(nums);
    cout << res << endl;

    /*
        Input:
        [2, 4, 1, 3, 5]

        [5, 4, 3, 2, 1]
    */
    /*
        Output:
         3
         10
     */
     /*
         Example 4
            Input:
            [8, 4, 2, 1]
            Output:
            6
            Why:

            (8, 4), (8, 2), (8, 1)

            (4, 2), (4, 1)

            (2, 1)
            Each big number bullying the smaller ones after it.
     */


    return 0;
}