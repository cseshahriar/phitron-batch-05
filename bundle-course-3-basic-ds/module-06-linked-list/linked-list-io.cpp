#include <bits/stdc++.h>
using namespace std;
// linked list input

class Node {
    public:
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }

};

void insert_at_tail(Node *&head, int val) {
    Node * newNode = new Node(val); // create new node
    if(head == NULL) { // if head is empty
        head = newNode; // update
        return;
    }
    Node * temp = head;
    while(temp->next != NULL) {
        temp = temp->next; // insert at tail and link with head -> next 
    }
    // temp ekhon last node e
    // add new node at last
    temp->next = newNode;
   
}

void print_linked_list(Node * head) {
    cout << endl;
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}

int main() {
    int val;
    Node * head = NULL;

    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}