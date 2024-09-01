#include <bits/stdc++.h>
using namespace std;
// reverse single linked list
// 10.8 
class Node {
    public:
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
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

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;

    print_normal(head);
    return 0;
}