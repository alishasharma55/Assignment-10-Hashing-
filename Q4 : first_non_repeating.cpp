#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {4, 5, 1, 2, 0, 4};

    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int num : nums) {
        freq[num]++;
    }

    // Find first non-repeating element
    for (int num : nums) {
        if (freq[num] == 1) {
            cout << "First Non-Repeating Element: "
                 << num << endl;
            return 0;
        }
    }

    cout << "No non-repeating element found." << endl;

    return 0;
}
