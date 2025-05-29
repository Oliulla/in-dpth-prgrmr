#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int sum) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == sum) {
                    count++;
                }
            }
        }
        return count;

    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 1, 5, 7, -1 };
    int sum = 6;
    int result = s.countPairs(nums, sum);
    cout << result << endl;

    /*
        Input:
        [1, 5, 7, -1], sum = 6
    */
    /*
         Output:
         2
     */
    return 0;
}