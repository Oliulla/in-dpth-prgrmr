#include<iostream>
#include<vector>

using namespace std;


class Solution {
    public:
        float averageOfNums(vector<int>& nums) {
            float sum = 0;
            for(int i = 0; i < nums.size(); i++){
                sum += nums[i];
            }
            return float(sum / nums.size());
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    cout << s.averageOfNums(nums) << endl;
    return 0;
}