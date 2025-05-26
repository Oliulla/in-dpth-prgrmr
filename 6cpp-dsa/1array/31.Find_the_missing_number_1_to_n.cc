#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findTheMissingNumber(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (i != nums[i - 1]) return i;
        }
        return 0;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 1, 2, 4, 5 };
    int result = s.findTheMissingNumber(nums);
    cout << result << endl;
    /*
    Output:
        3
    */

    return 0;
}