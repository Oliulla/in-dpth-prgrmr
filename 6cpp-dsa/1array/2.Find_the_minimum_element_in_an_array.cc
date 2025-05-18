#include<iostream>
#include<vector>

using namespace std;


class Solution {
    public:
        int findMin(vector<int>& nums) {
            int minNum = nums[0];
            for(int i = 1; i < nums.size(); i++) {
                if(nums[i] < minNum) minNum = nums[i];
            }
            return minNum;
        }
};


int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << s.findMin(nums) << endl;

    return 0;
}