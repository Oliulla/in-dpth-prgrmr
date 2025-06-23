#include "print.h"
using namespace std;

void print(const vector<int>& nums) {
    cout << "[";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i];
        if (i != nums.size() - 1)
            cout << ", ";
    }
    cout << "]\n";
}
