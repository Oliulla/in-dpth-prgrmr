#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> deleteElmFromSpecificPos(vector<int>& nums, int idx) {
            nums.resize(nums.size() - 1);

            for(int i = idx; i < nums.size(); i++) {
                nums[i] = nums[i+1];
            }
            return nums;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {5, 6, 7, 8, 9};
    int idx;
    cin >> idx;

    s.deleteElmFromSpecificPos(nums, idx);
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}