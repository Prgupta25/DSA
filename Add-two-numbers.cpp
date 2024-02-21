#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            if (l1 != nullptr) {
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                carry += l2->val;
                l2 = l2->next;
            }
            curr->next = new ListNode(carry % 10);
            carry /= 10;
            curr = curr->next;
        }
        return dummy.next;
    }
};

// Function to create a linked list from user input
ListNode* createLinkedList() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Solution solution;

    cout << "Enter elements for the first linked list:\n";
    ListNode* l1 = createLinkedList();

    cout << "Enter elements for the second linked list:\n";
    ListNode* l2 = createLinkedList();

    ListNode* result = solution.addTwoNumbers(l1, l2);
    
    cout << "Resultant Linked List: ";
    printLinkedList(result);

    return 0;
}
