#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myvec = {1, 2, 3, 4, 5};

    myvec.push_back(6);
    myvec.pop_back();

    for(int x : myvec) cout << x << " ";
    cout << endl;

    return 0;

}