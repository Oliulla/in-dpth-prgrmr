#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int>& arr) {
    int left = 1;
    int right = arr.size() - 2;

    int lMax = arr[left - 1];
    int rMax = arr[right + 1];

    int res = 0;
    while (left <= right) {

        if (rMax <= lMax) {

            res += max(0, rMax - arr[right]);
            rMax = max(rMax, arr[right]);

            right -= 1;
        }
        else {
            res += max(0, lMax - arr[left]);
            lMax = max(lMax, arr[left]);
            left += 1;
        }
    }
    return res;
}

int main() {
    vector<int> arr = { 0,1,0,2,1,0,1,3 };
    cout << maxWater(arr) << endl;
    return 0;
}