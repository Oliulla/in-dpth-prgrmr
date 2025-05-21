#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
    public:
        int findSecondSmallest(vector<int>& nums) {
            int smallest = INT_MAX, secondSmallest = INT_MAX;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] < smallest) {
                    secondSmallest = smallest;
                    smallest = nums[i];
                } else if(nums[i] < secondSmallest) {
                    secondSmallest = nums[i];
                }
            }
            return secondSmallest;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {20, 3, 40, 50, 10, 2};
    int res = s.findSecondSmallest(nums);
    cout << res << endl;

    return 0;
}