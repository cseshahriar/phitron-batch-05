#include <bits/stdc++.h>
using namespace std;

// tail is lez/last + 1
// tail is which node next is null

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

    // if head not empty
    Node * temp = head;
    while(temp->next != NULL) {
        temp = temp->next; // insert at tail and link with head -> next 
    }
    // temp ekhon last node e
    // add new node at last
    temp->next = newNode;
}

void print_linked_list(Node * head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    
    while(true) {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: print linked list" << endl;
        cout << "Option 3: terminate" << endl;

        int opt;
        cin >> opt;
        
        if(opt==1) {
            int val;
            cin >> val;
            insert_at_tail(head, val);
        } else if(opt == 2) {
            print_linked_list(head);
        } else if(opt == 3) {
            break;
        }
    }

    return 0;
}