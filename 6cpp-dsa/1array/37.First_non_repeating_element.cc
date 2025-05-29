#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int firstNonRepeatingElm(vector<int>& nums) {
        int nonRepeatingElm = nums[0];


    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 9, 4, 9, 6, 7, 4 };
    int result = s.firstNonRepeatingElm(nums);

    cout << result << endl;

    /*
        Input:
        [9, 4, 9, 6, 7, 4]
    */
    /*
         Output:
         6
     */
    return 0;
}