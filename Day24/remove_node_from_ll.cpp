#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
class Solution {
public:
    Node* removeNthFromEnd(Node* head, int n) {
        Node* fast = head;
        Node* slow = head;
        for(int i=0;i<n;i++) fast = fast -> next;
        if(fast == NULL) return head -> next;
        while(fast -> next != NULL) {
            fast = fast -> next;
            slow = slow -> next;
        }
        Node* delNode = slow -> next;
        slow -> next = slow -> next -> next;
        delete delNode;
        return head;
    }
};
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    Solution sol;
    int n = 2; 
    head = sol.removeNthFromEnd(head, n);
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}