#include<iostream>
#include<vector>
#include <climits>
using namespace std;

class Solution {
    public:
        int findSecondLargest(vector<int>& nums) {
            int largest = INT_MIN;
            int secondLargest = INT_MIN;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] > largest) {
                    secondLargest = largest;
                    largest = nums[i];
                } else if(nums[i] > secondLargest) {
                    secondLargest = nums[i];
                }
            }
            return secondLargest;
        }
};


int main(void) {
    Solution s;
    vector<int> nums = {300, 200, 100, 10};
    int res = s.findSecondLargest(nums);
    cout << res << endl;

    return 0;
}