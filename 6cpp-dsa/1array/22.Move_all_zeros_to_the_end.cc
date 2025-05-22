#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> moveAllZerosToTheEnd(vector<int>& nums) {
            int i = -1;
            int j = 0;
            int len = nums.size();
            while(++i < len) {
                if(nums[i] > 0) {
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                    j++;
                }
            }
            return nums;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 0, 5};
    s.moveAllZerosToTheEnd(nums);
    for(int num : nums) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}