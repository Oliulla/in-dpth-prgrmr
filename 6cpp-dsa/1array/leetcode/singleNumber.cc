#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNum = nums[0];
        int i = -1;
        int j = 1;
        while (++i < nums.size() - 1) {

        }
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 2,4,2 };
    int res = s.singleNumber(nums);
    cout << res << endl;

    return 0;
}