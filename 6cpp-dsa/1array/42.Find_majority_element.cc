#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int findMajorityElm(vector<int>& nums) {
        unordered_map<int, int> majorityElms;
        for (int i = 0; i < nums.size(); i++) {
            majorityElms[nums[i]]++;
        }

        for (auto& it : majorityElms) {
            // cout << it.first << ":" << it.second << endl;
            if (it.second > nums.size() / 2) return it.first;
        }
        return 0;
    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 2, 2, 1, 2, 2 };
    int res = s.findMajorityElm(nums);
    cout << res << endl;

    /*
        Input:
           [2, 2, 1, 2, 2]
    */
    /*
        Output:
           2
     */


    return 0;
}