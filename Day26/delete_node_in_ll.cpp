#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Solution {
public:
    void deleteNode(Node* node) {
        node->data = node->next->data;
        node->next = node->next->next;
    }
};
int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};
    Solution solution;
    solution.deleteNode(head->next); 
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}
