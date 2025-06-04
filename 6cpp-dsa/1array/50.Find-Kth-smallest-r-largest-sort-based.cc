#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<string, int> findKthSmallestLargestBasedOnSort(vector<int>& nums, int k) {
        unordered_map<string, int> smallestLargesMap;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[i]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }


        smallestLargesMap["Smallest: "] = nums[(k * 1) - 1];
        smallestLargesMap["Largest: "] = nums[(k * 2) - 1];


        return smallestLargesMap;
    }
};

int main(void) {
    Solution s;
    vector<int> nums = { 3, 2, 1, 5, 4, 8 };
    int k = 2;
    unordered_map<string, int> res = s.findKthSmallestLargestBasedOnSort(nums, k);

    for (auto& it : res) {
        cout << it.first << it.second << endl;
    }

    /**
     * INPUT:
     * nums = { 3, 2, 1, 5, 4 }
     * k = 2
     * OUTPUT:
     *    smallest: 2, largest: 4
     */

     /**
      * ANALYSIS:
      *   { 3, 2, 1, 5, 4 } => { 1, 2, 3, 4, 5 }
      *  (k * i) - 1 = 3*1 - 1 = 3 - 1 = 1
      *  (k * i) - 1 = 3*2 - 1 = 6 - 1 = 5
      */

    return 0;
}