#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> leadersInAnArr(vector<int>& nums) {
        vector<int> leaders;
        // for (int i = 0; i < nums.size();) {
        //     int leader = nums[i];
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums[j] > leader) {
        //             leader = nums[j];
        //             i = j + 1;
        //         }
        //     }
        //     leaders.push_back(leader);
        //     i++;
        // }
        int i = 0;
        while (i < nums.size())
        {
            int leader = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] > leader) {
                    leader = nums[j];
                    i = j;
                }
            }
            leaders.push_back(leader);
            i++;
        }

        return leaders;

    }
};


int main(void) {
    Solution s;
    vector<int> nums = { 16, 17, 4, 3, 5, 2 };
    vector<int> res = s.leadersInAnArr(nums);
    for (int num : res) {
        cout << num << endl;
    }

    return 0;
}