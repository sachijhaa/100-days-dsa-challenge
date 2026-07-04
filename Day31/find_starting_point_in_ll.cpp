#include <iostream>
using namespace std;
struct ListNode {
    int data;
    ListNode* next;
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                ListNode *start = head;
                while (start != slow) {
                    start = start->next;
                    slow = slow->next;
                }
                return start;
            }
        }
        return NULL;
    }
};
int main() {
    ListNode* head = new ListNode{3, nullptr};
    head->next = new ListNode{2, nullptr};
    head->next->next = new ListNode{0, nullptr};
    head->next->next->next = new ListNode{-4, nullptr};
    head->next->next->next->next = head->next; 
    Solution solution;
    ListNode* cycleStart = solution.detectCycle(head);
    if (cycleStart) {
        cout << "Cycle starts at node with value: " << cycleStart->data << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
    delete head->next->next->next;
    delete head->next->next;       
    delete head->next;             
    delete head;                   
    return 0;
}
