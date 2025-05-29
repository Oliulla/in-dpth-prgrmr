#include<iostream>
#include<vector>
#include <unordered_map>
#include <chrono>
using namespace std;

class Solution {
public:
    int firstNonRepeatingElm(vector<int>& nums) {
        int nonRepeatingElm = nums[0];
        unordered_map<int, int> numCountMap;
        for (int i = nums.size() - 1; i >= 0; i--) {
            numCountMap[nums[i]]++;
        }


        for (auto& it : numCountMap) {
            if (it.second == 1) {
                return it.first;
            }
        }


        // int foundJ = 0;

        // for (int i = 0; i < nums.size(); i++) {
        //     bool notFound = true;
        //     for (int j = 0; j < nums.size(); j++) {
        //         // cout << j << endl;
        //         if (nums[i] == nums[j] && i != j) {
        //             // foundJ = j;
        //             notFound = false;
        //             break;
        //         }
        //     }
        //     // cout << i << endl;
        //     if (notFound) {
        //         return nums[i];
        //     }
        // }

        // cout << foundJ << endl;

        return 0;

    }
};

int main(void) {

    Solution s;
    vector<int> nums = { 9, 4, 7, 6, 9, 4 };

    int duration = 0;
    int result = 0;
    for (int i = 0; i < 10; i++) {
        auto start = chrono::high_resolution_clock::now();
        result = s.firstNonRepeatingElm(nums);
        auto end = chrono::high_resolution_clock::now();
        duration += chrono::duration_cast<chrono::microseconds>(end - start).count();
    }
    float avgDuration = float(duration) / 10;

    cout << result << endl;
    cout << "Avg. Duration of Execution: " << avgDuration << " microseconds" << endl;


    /*
        Input:
        [9, 4, 9, 6, 7, 4]
    */
    /*
        Output:
         6
     */


    return 0;
}