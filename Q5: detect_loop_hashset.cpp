#include <iostream>
#include <unordered_set>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to detect loop using Hash Set
bool hasLoop(Node* head) {
    unordered_set<Node*> visited;

    Node* current = head;

    while (current != NULL) {
        // Node already visited => loop exists
        if (visited.find(current) != visited.end())
            return true;

        visited.insert(current);
        current = current->next;
    }

    return false;
}

int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Create loop: 4 -> 2
    fourth->next = second;

    if (hasLoop(head))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
