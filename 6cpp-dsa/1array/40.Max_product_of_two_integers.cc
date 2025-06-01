#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProductOfTwoInts(vector<int>& nums) {
        int maxProd = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                int prod = nums[i] * nums[j];
                if (prod > maxProd && i != j) {
                    maxProd = prod;
                }
            }
        }
        return maxProd;
    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 1, 10, -5, 4, -2 };
    int res = s.maxProductOfTwoInts(nums);
    cout << res << endl;

    /*
        Input:
            [1, 10, -5, 4, -2]
    */
    /*
        Output:
         40
     */


    return 0;
}