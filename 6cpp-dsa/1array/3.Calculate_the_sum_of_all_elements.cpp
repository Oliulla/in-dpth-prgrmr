#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        int sumOfElms(vector<int>& nums) {
            int sum = 0;
            for(int i = 0; i < nums.size(); i++) {
                sum += nums[i];
            }
            return sum;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    cout << s.sumOfElms(nums) << endl;

    return 0;
}