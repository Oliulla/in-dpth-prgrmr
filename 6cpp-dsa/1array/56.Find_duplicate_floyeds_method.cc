#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int findDupInFloyedsMethod(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        fast = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 1,3,4,2,1 };
    int res = s.findDupInFloyedsMethod(nums);
    cout << res << endl;

    /**
     * Expected Output:
     * = 2
     */

    return 0;
}