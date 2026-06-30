#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
class Solution {
public:
    Node *getIntersectionNode(Node *headA, Node *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        Node* temp1 = headA;
        Node* temp2 = headB;
        while(temp1 != temp2) {
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
            if(temp1 == temp2) return temp1;
            if(temp1 == NULL) temp1 = headB;
            if(temp2 == NULL) temp2 = headA;
        }  
        return temp1;     
    }
};
int main() {
    Solution s;
    Node* headA = new Node(4);
    headA->next = new Node(1);
    Node* headB = new Node(5);
    headB->next = new Node(6);
    headB->next->next = new Node(1);
    Node* intersection = new Node(8);
    headA->next->next = intersection;
    headB->next->next->next = intersection;
    intersection->next = new Node(4);
    intersection->next->next = new Node(5);
    Node* result = s.getIntersectionNode(headA, headB);
    if(result != NULL) {
        cout << "Intersection at node with value: " << result->data << endl;
    } else {
        cout << "No intersection." << endl;
    } 
    return 0;
}
