#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> rotateArrByKPosition(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size() - k; i++) {
            int temp = nums[i];
            nums[i] = nums[k + i];
            nums[k + i] = temp;
        }

        return nums;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 1, 2, 3, 4, 5 };
    int k = 2;
    s.rotateArrByKPosition(nums, k);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}