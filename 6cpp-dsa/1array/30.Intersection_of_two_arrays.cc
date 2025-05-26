#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> unionOfTwoArrays(vector<int> arr1, vector<int> arr2) {
        vector<int> interSectionArr;
        for (int i = 0; i < arr1.size(); i++) {
            for (int j = 0; j < arr2.size(); j++) {
                if (arr1[i] == arr2[j]) {
                    interSectionArr.push_back(arr1[i]);
                    continue;
                }
            }
        }
        return interSectionArr;

    }
};

int main(void) {
    Solution s;
    vector<int> arr1 = { 1, 2, 3, }, arr2 = { 2, 3, 4 };
    vector<int> result = s.unionOfTwoArrays(arr1, arr2);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    /*
    Output:
        [2, 3]
    */


    return 0;
}