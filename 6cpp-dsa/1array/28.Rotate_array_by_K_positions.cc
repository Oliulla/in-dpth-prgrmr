#include<iostream>
#include<vector>
#include "print.h"
using namespace std;

// class Solution {
// public:
//     void rotateArrByKPosition(vector<int>& nums, int k) {
//         // int j = k;
//         // while (--j >= 0)
//         // {
//         //     for (int i = nums.size() - 1; i > 0; i--) {
//         //         int temp = nums[i];
//         //         nums[i] = nums[i - 1];
//         //         nums[i - 1] = temp;
//         //     }
//         // }

//     }
// };

class Solution {
public:
    void rotateArrByKPosition(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            if (i < k) {
                res.push_back(nums[n + i - k]);
            }
            else {
                res.push_back(nums[i - k]);
            }
        }

        for (int i = 0; i < n; i++) {
            nums[i] = res[i];
        }
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 1, 2, 3, 4, 5 };
    int k = 2;
    s.rotateArrByKPosition(nums, k);
    print(nums);

    // Output:
    // [4, 5, 1, 2, 3]

    return 0;
}