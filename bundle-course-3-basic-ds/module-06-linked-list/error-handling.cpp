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
        // error handling
        if(temp == NULL) {
            cout << "Invalid index" << endl << endl;
            return;
        }
    }
    // now temp at postion
    // link both new->next = head and temp->next = new
    newNode->next = temp->next; // move current position value
    temp->next = newNode; // add node at position
}

void insert_at_head(Node *&head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Insert at head" << endl;
}

void del_at_pos(Node *head, int pos) {
    Node* temp = head;
    for(int i =1; i <= pos - 1; i++) {
        temp = temp->next; // head->next then next then next...
        // error handling
        if(temp == NULL) {
            cout << "Invalid index" << endl << endl;
            return;
        }
    }

    // error handling
    if(temp->next == NULL) {
        cout << "Invalid index" << endl << endl;
        return;
    }

    // temp now at position
    Node* delNode = temp->next; // del position node
    temp->next = temp->next->next;
    delete delNode;
    cout << endl << "Delete from position" << pos << endl << endl;
}

void del_at_head(Node *&head) {
    // error handling
    if(head == NULL) {
        cout << "Invalid index" << endl << endl;
        return;
    }

    Node* deleteNode = head; // deleteHead for delete
    head = head->next; // change current head to next
    delete deleteNode;
    cout << endl << "Delete from head" << endl << endl;
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
        cout << "Option 1: Insert at Tail" << endl; // done
        cout << "Option 2: print linked list" << endl; // done
        cout << "Option 3: Insert at any position" << endl; // done
        cout << "Option 4: Insert at head" << endl; // done
        cout << "Option 5: Delete at position" << endl; // done
        cout << "Option 6: Delete at head" << endl; // done
        cout << "Option 7: terminate" << endl;

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
            if(pos == 0) {
                insert_at_head(head, val);
            } else {
                insert_at_position(head, pos, val);
            }
        }
        else if(opt == 4) {
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if(opt == 5) {
            int pos;
            cin >> pos;
            if(pos == 0) {
                del_at_head(head);
            }
            del_at_pos(head, pos);
        }
        else if(opt == 6) {
            del_at_head(head);
        }
        else if(opt == 7) {
            break;
        }
    }

    return 0;
}