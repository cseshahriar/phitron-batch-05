#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }

};

void insert_at_tail(Node *head, Node * tail, int val) {
    Node * newNode = new Node(val); // create new node
    if(head == NULL) { // if head is empty
        head = newNode; // update
        tail = newNode;
        return;
    }
    tail->next  = newNode;
    tail = newNode;
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    Node *a = new Node(30);
    Node *b = new Node(20);
    Node *c = new Node(50);
    Node *d = new Node(40);
    Node * tail = b; 

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);

    cout << "after sort " << endl;
    // sort
    for(Node* i=head; i->next != NULL; i = i->next) {
        for(Node* j=i->next; j != NULL; j = j->next) {
            if(i->val > j->val) { // asc
                swap(i->val, j->val);
            }
        }
    }

    print_linked_list(head);
    return 0;
}
