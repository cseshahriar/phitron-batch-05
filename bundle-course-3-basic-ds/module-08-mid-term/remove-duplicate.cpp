// https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-05/challenges/remove-duplicate-9-1
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

void remove_duplicate(Node* head) {
  Node *first, *second, *duplicate;
  first = head;
  // select one by one
  while(first != NULL && first->next != NULL) {
    second = first;
    while(second->next != NULL) {
        if(first->val == second->next->val) { // first->next is second
            duplicate = second->next;
            second->next = second->next->next; // update next
            delete duplicate;
        } else {
            second  = second->next;
        }
    }
    first = first->next;
  }
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
    Node * head = NULL;
    Node * tail = NULL;
    
    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }  
    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}
