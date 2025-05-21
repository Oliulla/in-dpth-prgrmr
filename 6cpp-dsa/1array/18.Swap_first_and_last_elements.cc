#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> swapFirstAndLastElement(vector<int>& nums) {
            int temp = nums[0];
            nums[0] = nums[nums.size() - 1];
            nums[nums.size() - 1] = temp;
            return nums;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {7, 8, 9};
    s.swapFirstAndLastElement(nums);
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}