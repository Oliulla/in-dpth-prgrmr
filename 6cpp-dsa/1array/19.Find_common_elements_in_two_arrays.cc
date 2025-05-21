#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> findCommonElms(vector<int> arr1, vector<int> arr2) {
            vector<int> commonElms;
            for(int i = 0; i < arr1.size(); i++) {
                for(int j = 0; j < arr2.size(); j++) {
                    if(arr1[i] == arr2[j]) {
                        commonElms.push_back(arr1[i]);
                    }
                }
            }
            return commonElms;
        }
};

int main(void) {
    Solution s;
    vector<int> arr1 = {1, 2, 3}, arr2 = {2, 3, 4};
    vector<int> res = s.findCommonElms(arr1, arr2);
    for(int n : res) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}