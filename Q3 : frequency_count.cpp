#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {2, 3, 2, 4, 3, 2};

    unordered_map<int, int> freq;

    // Count frequencies
    for (int num : nums) {
        freq[num]++;
    }

    cout << "Frequency of each number:\n";

    for (auto pair : freq) {
        cout << pair.first << " -> "
             << pair.second << " times" << endl;
    }

    return 0;
}
