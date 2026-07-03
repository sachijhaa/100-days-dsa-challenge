#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Solution {
public:
    Node* reverse(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    bool isPalindrome(Node* head) {
         if (head == nullptr || head->next == nullptr) return true;
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* secondHalf = reverse(slow);
        Node* firstHalf = head;
        while (secondHalf) {
            if (firstHalf->data != secondHalf->data)
                return false;
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        return true;  
    }
};
int main() {
    Node* head = new Node{1, new Node{2, new Node{2, new Node{1, nullptr}}}};
    Solution solution;
    if (solution.isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }
    return 0;
}