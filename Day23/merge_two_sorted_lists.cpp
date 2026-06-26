#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        while(t1 != NULL && t2 != NULL) {
            if(t1 -> val < t2 -> val) {
                temp -> next = t1;
                temp = t1;
                t1 = t1 -> next;
            } else {
                temp -> next = t2;
                temp = t2;
                t2 = t2 -> next;
            }
        }
        if (t1) temp -> next = t1;
        else temp -> next = t2;
        return dummyNode -> next;      
    }
};
int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);
    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);
    while (mergedList != NULL) {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }
    cout << endl;
    return 0;
}