#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void countEvenNdOdd(vector<int>& nums) {
            int oddCout = 0, evenCount = 0;

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] % 2 == 0) evenCount += 1;
                else oddCout += 1;
            }

            cout << "Even counts: " << evenCount << endl;
            cout << "Odd counts: " << oddCout << endl;
        } 
};


int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    s.countEvenNdOdd(nums);
    return 0;
}