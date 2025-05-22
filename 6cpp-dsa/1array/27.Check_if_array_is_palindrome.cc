#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool checkIfArrIsPalindrome(vector<int>& nums) {
        int len = nums.size();
        for (int i = 0; i < len / 2; i++) {
            if (nums[i] != nums[len - (i + 1)]) {
                return false;
            }
        }
        return true;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 1, 2, 6, 2, 1 };
    bool res = s.checkIfArrIsPalindrome(nums);

    cout << res << endl;
    return 0;
}