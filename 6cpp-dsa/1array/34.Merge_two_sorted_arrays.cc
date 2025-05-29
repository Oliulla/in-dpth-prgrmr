#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> mergeTwoSortedArr(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combinedArr;
        int i = 0; // 2
        int j = 0; // 3
        int k = 0;
        int len = nums1.size() + nums2.size();
        while (k < len) {
            if (nums1.size() == nums2.size()) {
                k++;
                if (i < nums1.size() && j < nums2.size()) {
                    if (nums1[i] < nums2[j]) {
                        combinedArr.push_back(nums1[i]);
                        i++;
                    }
                    else {
                        combinedArr.push_back(nums2[j]);
                        j++;
                    }
                }
                else {
                    if (i == nums1.size()) {
                        combinedArr.push_back(nums2[j]);
                        j++;
                    }
                    else if (j == nums2.size()) {
                        combinedArr.push_back(nums1[i]);
                        i++;
                    }
                }
            }
            else if (nums1.size() > nums2.size()) {
                k++;
                if (j < nums2.size()) {
                    if (nums1[i] < nums2[j] && i < nums1.size()) {
                        combinedArr.push_back(nums1[i]);
                        i++;
                    }
                    else {
                        combinedArr.push_back(nums2[j]);
                        j++;
                    }
                }
                else {
                    combinedArr.push_back(nums1[i]);
                    i++;
                }
            }
            else {
                k++;
                if (i < nums1.size()) {
                    if (nums2[j] < nums1[i] && j < nums2.size()) {
                        combinedArr.push_back(nums2[j]);
                        j++;
                    }
                    else {
                        combinedArr.push_back(nums1[i]);
                        i++;
                    }
                }
                else {
                    combinedArr.push_back(nums2[j]);
                    j++;
                }
            }
        }
        return combinedArr;

    }
};

int main(void) {
    Solution s;
    vector<int> arr2 = { 4, 5, 6 }, arr1 = { 1, 2, 3, };
    vector<int> result = s.mergeTwoSortedArr(arr1, arr2);
    for (int num : result) {
        cout << num << endl;
    }

    /*
        Output:
          [1, 2, 3, 4, 5, 6]
    */

    return 0;
}