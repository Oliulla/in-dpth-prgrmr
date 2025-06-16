#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countSubarraysWithSumK(vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;

            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];

                if (sum == k)
                    count++;
            }
        }
        return count;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 1, 1, 1, };
    int k = 2;
    int res = s.countSubarraysWithSumK(nums, k);
    cout << res << endl;

    /**
     * Expected Output:
     * = 2
     */

    return 0;
}