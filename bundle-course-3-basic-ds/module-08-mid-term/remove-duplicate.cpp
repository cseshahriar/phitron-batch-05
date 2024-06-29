// https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-05/challenges/remove-duplicate-9-1
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        long long int val;
        Node* next;

    Node(long long int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, long long int val) {
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
    if (head == nullptr) {
        return;
    }

    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        Node* runner = current;
        while (runner->next != nullptr) {
            if (runner->next->val == current->val) {
                // Duplicate found, remove runner->next
                Node* duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
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
    
    long long int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }  
    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}
