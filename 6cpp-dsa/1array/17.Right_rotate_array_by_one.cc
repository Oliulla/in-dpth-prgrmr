#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> rightRotateArray(vector<int>& nums) {
            for(int i = nums.size()-1; i > 0; i--) {
                int temp = nums[i];
                nums[i] = nums[i-1];
                nums[i-1] = temp;
            }
            return nums;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    s.rightRotateArray(nums);

    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}