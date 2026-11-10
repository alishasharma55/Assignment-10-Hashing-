#include <iostream>
#include <unordered_set>
using namespace std;

// Binary Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

// Function to check duplicates
bool hasDuplicates(Node* root, unordered_set<int>& values) {
    if (root == NULL)
        return false;

    // If value already exists
    if (values.find(root->data) != values.end())
        return true;

    values.insert(root->data);

    return hasDuplicates(root->left, values) ||
           hasDuplicates(root->right, values);
}

int main() {
    /*
             10
            /  \
           5   15
          / \
         3  10
    */

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(10); // Duplicate

    unordered_set<int> values;

    if (hasDuplicates(root, values))
        cout << "Duplicates Found" << endl;
    else
        cout << "No Duplicates" << endl;

    return 0;
}
