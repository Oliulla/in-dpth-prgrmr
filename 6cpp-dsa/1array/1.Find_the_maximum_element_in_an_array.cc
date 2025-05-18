#include <iostream>
#include <vector>

using namespace std;


class Solution {
    public:
        int findMax(vector<int>& nums) {
            int maxNum = nums[0];
            for(int i = 1; i < nums.size(); i++) {
                if(nums[i] > maxNum) maxNum = nums[i];
            }
            return maxNum;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << s.findMax(nums) << endl;
    return 0;
}