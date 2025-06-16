#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countSubWithGivenXOR(vector<int>& nums, int k) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            int prefXOR = 0;

            for (int j = i; j < nums.size(); j++) {
                prefXOR = prefXOR ^ nums[j];

                if (prefXOR == k)
                    res++;
            }
        }
        return res;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 4, 2, 2, 6, 4 };
    int k = 6;
    int res = s.countSubWithGivenXOR(nums, k);
    cout << res << endl;

    /**
     * Expected Output:
     * = 4
     */

    return 0;
}