#include <iostream>
using namespace std;
struct Node {
    int val;
    Node* next;
    Node* random;
    Node(int _val) : val(_val), next(nullptr), random(nullptr) {}
};
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return NULL;
        Node* curr = head;
        while(curr){
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }
        curr = head;
        while(curr){
            if(curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }
        curr = head;
        Node* dummy = new Node(0);
        Node* copyCurr = dummy;
        while(curr){
            Node* copy = curr->next;
            curr->next = copy->next;
            copyCurr->next = copy;
            copyCurr = copy;
            curr = curr->next;
        }
        return dummy->next;
    }
};
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->random = head->next->next; 
    head->next->random = head; 
    head->next->next->random = head->next; 
    Solution solution;
    Node* copiedList = solution.copyRandomList(head);
    Node* curr = copiedList;
    while (curr) {
        cout << "Node val: " << curr->val;
        if (curr->random)
            cout << ", Random points to: " << curr->random->val;
        else
            cout << ", Random points to: NULL";
        cout << endl;
        curr = curr->next;
    }
    return 0;
}