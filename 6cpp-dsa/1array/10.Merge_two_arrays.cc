#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void mergeArr(vector<int>& arr1, vector<int>& arr2) {
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    }
};

int main(void) {
    Solution s;
    vector<int> arr1 = {1, 2};
    vector<int> arr2 = {3, 4};
    s.mergeArr(arr1, arr2);

    for(int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
