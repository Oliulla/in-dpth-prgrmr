#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findTheDuplicateNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) return nums[i];
            }
        }
        return 0;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 1, 3, 4, 2, 2 };
    int result = s.findTheDuplicateNumber(nums);

    cout << result << endl;

    return 0;
}