#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void findPositiveNegativeNdZeroElms(vector<int>& nums) {
            int pos=0, neg=0, zero=0;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == 0) zero += 1;
                else if(nums[i] > 1) pos += 1;
                else neg += 1;
            }
            cout << "Positive Count: " << pos << "\nNegative Count: " << neg << "\nZero Count: " << zero << endl;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {2, 4, -8, 0, 9, 7, -5};
    s.findPositiveNegativeNdZeroElms(nums);

    return 0;
}