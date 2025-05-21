#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> leftRotateArray(vector<int>& nums) {
            for(int i = 0; i < nums.size()-1; i++) {
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp; 
            }
            return nums;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    s.leftRotateArray(nums);
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}