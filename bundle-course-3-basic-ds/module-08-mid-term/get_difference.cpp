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

void print_diff(Node* head) {
    if (head == NULL) {
        cout << 0 << endl;
        return;
    }
    long long int max_val = LLONG_MIN;
    long long int min_val = LLONG_MAX;
    Node* temp = head;
    while(temp != NULL) {
        if(temp->val > max_val) {
            max_val = temp->val;
        }
        if(temp->val < min_val) {
            min_val = temp->val;
        }
        temp = temp->next;
    }
    cout << max_val - min_val << endl;
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
    print_diff(head);
    return 0;
}
