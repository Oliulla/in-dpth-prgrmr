#include <iostream>
#include <vector>
#include <span>

using namespace std;

class Solution {
public:
    vector<int> printEvenIdxElms(const vector<int>& nums) {
        int n = (nums.size() + 1) / 2;
        vector<int> result;
        result.reserve(n);

        for (size_t i = 0; i < nums.size(); i += 2) {
            result.push_back(nums[i]);
        }
        return result;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = {10, 20, 30, 40, 50};
    vector<int> result =  s.printEvenIdxElms(nums);

    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}