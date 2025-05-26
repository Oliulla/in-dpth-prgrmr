#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int largestSumOfContiguousSubarray(vector<int>& nums) {

    }
};

int main(void) {
    Solution s;
    vector<int> nums = { -2, 1, -3, 4, -1, 2 };
    int result = s.largestSumOfContiguousSubarray(nums);

    cout << result << endl;

    /*
        Output:
            5
    */

    return 0;
}