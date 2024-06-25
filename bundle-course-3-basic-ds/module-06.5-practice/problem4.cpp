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

void insert_at_tail(Node *&head, int val) {
    Node * newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node * temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    // last 
    temp->next = newNode;
   
}

void insert_at_position(Node* head, int pos, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i =1; i <= pos - 1; i++) {
        temp = temp->next; // head->next then next then next...
        // error handling
        if(temp == NULL) {
            cout << "Invalid" << endl << endl;
            return;
        }
    }
    // now temp at postion
    // link both new->next = head and temp->next = new
    newNode->next = temp->next; // move current position value
    temp->next = newNode; // add node at position
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
    // initialize
    int val;
    Node * head = NULL;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }

    // test case
    int t = 0;
    cin >> t;
    while(t--) {
        int index, val;
        cin >> index >> val;
        insert_at_position(head, index, val);

        // print linked list
        print_linked_list(head);
    }
    return 0;
}