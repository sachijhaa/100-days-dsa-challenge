#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }
    ListNode* getKthNode(ListNode* temp, int k) {
        k -= 1;
        while(temp != NULL && k > 0) {
            k--;
            temp = temp -> next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;
        while(temp != NULL) {
            ListNode* kTHNode = getKthNode(temp, k);
            if(kTHNode == NULL) {
                if(prevLast) prevLast -> next = temp;
                break;
            }
            ListNode* nextNode = kTHNode -> next;
            kTHNode -> next = NULL;
            reverseLinkedList(temp);
            if(temp == head) {head = kTHNode;}
            else {prevLast -> next = kTHNode;}
            prevLast = temp;
            temp = nextNode;
        }
        return head;
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
    ListNode* newHead = solution.reverseKGroup(head, k);
    ListNode* current = newHead;
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
    return 0;
}