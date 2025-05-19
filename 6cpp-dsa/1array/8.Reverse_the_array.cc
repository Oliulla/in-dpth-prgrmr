#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> reverseArr(vector<int>& nums) {
            int len = nums.size();
            for(int i = 0; i < nums.size() / 2; i++) {
                --len;
                int temp = nums[i];
                nums[i] = nums[len];
                nums[len] = temp;
            }
            return nums;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> revArr = s.reverseArr(nums);
    
    for(int i = 0; i < revArr.size(); i++) {
        cout << revArr[i] << endl;
    }

    return 0;
}