#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> unionOfTwoArrays(vector<int> arr1, vector<int> arr2) {
        vector<int> unionArr = arr1;
        bool found = false;
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < unionArr.size(); j++) {
                if (arr2[i] == unionArr[j]) {
                    found = true;
                    continue;
                }
                else {
                    found = false;
                }
            }
            if (!found) unionArr.push_back(arr2[i]);
        }

        return unionArr;
    }
};

int main(void) {
    Solution s;
    vector<int> arr1 = { 1, 2, 3 }, arr2 = { 3, 4 };
    vector<int> result = s.unionOfTwoArrays(arr1, arr2);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    // Output:
    // [1, 2, 3, 4]

    return 0;
}