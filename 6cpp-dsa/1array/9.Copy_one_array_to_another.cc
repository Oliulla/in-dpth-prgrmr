#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void copyArrToAnother(vector<int>& arr1, vector<int>& arr2, int n)  {
            /*
             for(int i = 0; i < n; i++) {
                 arr2.push_back(arr1[i]);
             }
            */ 
           
            /*
             arr2.resize(n);
             for(int i = 0; i < n; i++) {
                 arr2[i] = arr1[i];
             }
            */
            
            arr2 = arr1;
        }
};

int main(void) {
    Solution s;
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2;
    s.copyArrToAnother(arr1, arr2, 5);

    for(int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << endl;
    }

    return 0;
}