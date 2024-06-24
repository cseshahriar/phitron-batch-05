#include <bits/stdc++.h>
using namespace std;

// insert at any position


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
        cout << endl 
            << "Inserted at head" << endl 
            << endl;
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

void insert_at_position(Node* head, int pos, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i =1; i <= pos - 1; i++) {
        temp = temp->next; // head->next then next then next...
    }
    // now temp at postion
    // link both new->next = head and temp->next = new
    newNode->next = temp->next; // move current position value
    temp->next = newNode; // add node at position
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
    Node* head = NULL;
    
    while(true) {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: print linked list" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: terminate" << endl;

        int opt;
        cin >> opt;
        
        if(opt==1) {
            int val;
            cin >> val;
            insert_at_tail(head, val);
        } else if(opt == 2) {
            print_linked_list(head);
        } else if(opt == 3) {
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val; 
            insert_at_position(head, pos, val);
        }
        else if(opt == 4) {
            break;
        }
    }

    return 0;
}