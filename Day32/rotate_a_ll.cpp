#include <iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head -> next == nullptr || k == 0) return head;
        ListNode* tail = head;
        int length = 1;
        while(tail -> next != nullptr) {
            tail = tail -> next;
            length++;
        }
        k = k % length;
        if (k==0) return head;
        tail -> next = head;
        int steps = length - k;
        ListNode* newTail = head;
        for(int i = 1;i<steps;i++) {newTail = newTail -> next;}
        ListNode* newHead = newTail -> next;
        newTail -> next = nullptr;
        return newHead;
    } 
};
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution solution;
    int k = 2;
    ListNode* rotatedHead = solution.rotateRight(head, k);
    ListNode* current = rotatedHead;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    current = rotatedHead;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}