#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> rotateArrByKPosition(vector<int>& nums, int k) {
        int j = k;
        while (--j >= 0)
        {
            for (int i = nums.size() - 1; i > 0; i--) {
                int temp = nums[i];
                nums[i] = nums[i - 1];
                nums[i - 1] = temp;
            }
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

    // Output:
    // [4, 5, 1, 2, 3]

    return 0;
}