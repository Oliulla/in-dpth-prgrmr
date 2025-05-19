#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        bool isArrSorted(vector<int>& nums) {
            if (nums.size() <= 1) return true;

            bool increasing = true;
            bool decreasing = true;

            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < nums[i - 1]) increasing = false;
                if (nums[i] > nums[i - 1]) decreasing = false;
            }

            return increasing || decreasing;
        }
};


int main(void) {
    Solution s;
    vector<int> nums = {7, 6, 5, 3};
    cout << s.isArrSorted(nums) << endl;

    cout << "-----------------------------" << endl;
    vector<int> nums1 = {1, 2, 3, 4};
    cout << s.isArrSorted(nums1) << endl;

    cout << "-----------------------------" << endl;
    vector<int> nums2 = {1, 0, 2, 4};
    cout << s.isArrSorted(nums2) << endl;

    return 0;
}