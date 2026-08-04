#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};
struct cmp {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
        for (auto node : lists) {
            if (node)
                pq.push(node);
        }
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        while (!pq.empty()) {
            ListNode* curr = pq.top();
            pq.pop();
            tail->next = curr;
            tail = tail->next;
            if (curr->next)
                pq.push(curr->next);
        }
        return dummy->next;
    }
};
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    vector<ListNode*> lists;
    lists.push_back(createList({1, 4, 5}));
    lists.push_back(createList({1, 3, 4}));
    lists.push_back(createList({2, 6}));
    Solution obj;
    ListNode* ans = obj.mergeKLists(lists);
    cout << "Merged List: ";
    printList(ans);
    return 0;
}