#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        bool isBothArrayEqual(vector<int>& arr1, vector<int>& arr2) {
            for(int i = 0; i < arr1.size(); i++) {
                if(arr1[i] != arr2[i]){
                    return false;
                    break;
                }
            }
            return true;
        }
};

int main(void) {
    Solution s;
    vector<int> arr1 = {1, 2, 4};
    vector<int> arr2 = {1, 2, 3};
    bool res = s.isBothArrayEqual(arr1, arr2);
    
    cout << res << endl;

    return 0;
}