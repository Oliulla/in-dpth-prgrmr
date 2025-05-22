#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> removeDupFromSortedArr(vector<int>& nums) {
        int write = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[write] = nums[i];
                write++;
            }
        }

        nums.resize(write);
        return nums;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 1, 1, 2, 2, 3, 3 };
    s.removeDupFromSortedArr(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}
