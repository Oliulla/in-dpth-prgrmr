#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        map<int, int> frequency(vector<int>& nums) {
            map<int, int> freq;
            // for(int i = 0; i < nums.size(); i++) {
            //     if(freq[nums[i]]) {
            //        freq[nums[i]] += freq[nums[i]];
            //     } else {
            //         freq[nums[i]] = 1;
            //     }
            // }
            for(int num : nums) {
                freq[num]++;
            }
            return freq;
        }
};

int main(void) {
    Solution s;
    vector<int> nums = {1, 2, 2, 3};
    map<int, int> result = s.frequency(nums);

    cout << "{";
    for (auto& [key, value] : result) {
        cout << key << ": " << value << ", ";
    }
    cout << "}" << endl;

    return 0;
}
