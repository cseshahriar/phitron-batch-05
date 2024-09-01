#include <bits/stdc++.h>
using namespace std;
// reverse double linked list

class Node {
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node * head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse_recursion(Node *n) { // recursion
    // base case
    if(n == NULL) {
        return;
    }
    print_reverse_recursion(n->next);
    cout << n->val << " ";
}

void reverse(Node* &head, Node *cur) {
    if(cur->next == NULL) {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;

    print_normal(head);
    reverse(head, head);
    print_normal(head);

    return 0;
}