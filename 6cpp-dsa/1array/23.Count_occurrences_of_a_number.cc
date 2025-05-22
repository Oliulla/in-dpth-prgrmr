#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int countSpecificNum(vector<int>& nums, int num) {
            int count = 0;
            for(int n : nums) {
                if(n == num) count++;
            }
            return count;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 2, 2, 3};
    int specificNum = 2;
    int res = s.countSpecificNum(nums, specificNum);
    
    
    cout << res << endl;

    return 0;
}