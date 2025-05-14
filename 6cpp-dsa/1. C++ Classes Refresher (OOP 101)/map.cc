#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 2, 2, 4, 1};
    unordered_map<int, int> freq;

    for (int x : nums) freq[x]++;

    for (auto &[val, count] : freq)
        cout << val << " appears " << count << " times\n";


    return 0;
}



// int main() {
//     map<string, int> age;
//     age["Alice"] = 20;
//     age["Oli"] = 28;

//     // Iterating through the map
//     for(auto &[name, value]: age) {
//         cout << name << " is " << value << " years old." << endl;
//     }

//     return 0;
// }