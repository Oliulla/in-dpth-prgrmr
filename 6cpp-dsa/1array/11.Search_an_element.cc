#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int searchElmIndex(vector<int>& nums, int elm) {
            int elmIdx = 0;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == elm) {
                    elmIdx = i;
                    break;
                }
            }
            return elmIdx;
        }
};

int main(void){
    Solution s;
    vector<int> nums = {3, 6, 9};
    int searchElm = 6;
    int res = s.searchElmIndex(nums, searchElm);
    cout << "Index: " << res << endl;

    return 0;
}