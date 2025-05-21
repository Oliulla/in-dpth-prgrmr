#include <iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> removeDuplicates(vector<int>& nums) {
            int len = nums.size();
            vector<int> unq;
            for(int i = 0; i < len; i++) {
                bool found = false;
               for(int j = 0; j < unq.size(); j++) {
                    if(unq[j] == nums[i]) {
                        found = true;
                        break;
                    }
                }
                if(!found) unq.push_back(nums[i]);
            }
            return unq;
        }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 2, 2, 2, 3, 4, 5, 1};

    vector<int> unqNms = s.removeDuplicates(nums);
    for (int i = 0; i < unqNms.size(); i++) {
        cout << unqNms[i] << " ";
    }
    cout << endl;

    return 0;
}
