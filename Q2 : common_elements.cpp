#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {3, 4, 5, 6};

    unordered_set<int> setA(A.begin(), A.end());

    cout << "Common Elements: ";

    for (int x : B) {
        if (setA.find(x) != setA.end()) {
            cout << x << " ";
        }
    }

    return 0;
}
