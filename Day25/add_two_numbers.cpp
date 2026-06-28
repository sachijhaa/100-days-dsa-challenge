#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(-1);     
        ListNode* curr = dummyHead;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        while(temp1 != NULL || temp2 != NULL) {
            int sum = carry;
            if (temp1) sum += temp1 -> val;
            if (temp2) sum += temp2 -> val;
            ListNode* newNode = new ListNode(sum % 10);
            carry = sum / 10;
            curr -> next = newNode;
            curr = curr -> next;
            if (temp1) temp1 = temp1 -> next;
            if (temp2) temp2 = temp2 -> next;
        }   
        if (carry) {
            ListNode* newNode = new ListNode (carry);
            curr -> next = newNode;
        }
        return dummyHead -> next;
    }
};
int main() {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);
    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;
    return 0;
}