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

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void is_same_linked_list(Node* head1, Node* head2) {
    bool found = true;
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != NULL && temp2 != NULL) {
        if(temp1->val != temp2->val) {
            found = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(found && temp1 == NULL && temp2 == NULL) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


int main() {
    int val1;
    Node * head1 = NULL;
    Node * tail1 = NULL;
    while(true) {
        cin >> val1;
        if(val1 == -1) break;
        insert_at_tail(head1, tail1, val1);
    }

    int val2;
    Node * head2 = NULL;
    Node * tail2 = NULL;
    while(true) {
        cin >> val2;
        if(val2 == -1) break;
        insert_at_tail(head2, tail2, val2);
    }
    is_same_linked_list(head1, head2);
    return 0;
}
