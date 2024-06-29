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
    Node * newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if(tail == NULL) {
        tail = head; 
    }
}


void del_at_pos(Node *&head, Node *&tail, int pos) {
    if(head == NULL) return; // empty
    if(pos == 0) { // del head
        Node* delNode = head;
        head = head->next;
        if(head == NULL) {
            tail = NULL;
        }
        delete delNode;
        return;
    }

    Node* temp = head;
    for(int i= 0; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL) return; // invalid

    Node* delNode = temp->next;
    temp->next = temp->next->next;
    if(temp->next == NULL) {
        tail = temp; // update tail if we delete the last node
    }
    delete delNode;
}

void print_linked_list(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    int q;
    cin >> q;

    while(q--) {
        int x, v;
        cin >> x >> v;
        
        if(x == 0) {
            insert_at_head(head, tail, v);
        } else if(x == 1) {
            insert_at_tail(head, tail, v);
        } else if(x == 2) {
            del_at_pos(head, tail, v);
        }
        
        print_linked_list(head);
    }

    return 0;
}