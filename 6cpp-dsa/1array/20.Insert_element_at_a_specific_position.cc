#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> insertElmAtASpecificPos(vector<int>& nums, int val, int idx) {
            int len = nums.size();
            int curr = nums[idx];
            nums.resize(len+1);

           for (int i = idx; i < len; i++) {
                if(i == idx) {
                    nums[i] = val;
                    len++;
                } else {
                    int temp = nums[i];
                    nums[i] = curr;
                    curr = temp;
                }
           }
           return nums;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 4, 5, 6};
    int val = 3;
    int idx = 2;
    s.insertElmAtASpecificPos(nums, val, idx);

    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}