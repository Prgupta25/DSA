#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class Solution {
public:
    Node* reverseDLL(Node* head) {
        Node* temp = head;
        Node* prev = NULL;
        while (temp) {
            Node* forw = temp->next;
            temp->next = temp->prev;
            temp->prev = forw;
            prev = temp;
            temp = forw;
        }
        return prev;
    }
};

void printDLL(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;
    int n;
    cout << "Enter the number of elements in the doubly linked list: ";
    cin >> n;
    Node* head = nullptr;
    Node* prev = nullptr;
    cout << "Enter the elements of the doubly linked list: ";
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            prev->next = newNode;
            newNode->prev = prev;
        }
        prev = newNode;
    }

    cout << "Original Doubly Linked List: ";
    printDLL(head);

    Node* reversedHead = sol.reverseDLL(head);

    cout << "Reversed Doubly Linked List: ";
    printDLL(reversedHead);

    return 0;
}
