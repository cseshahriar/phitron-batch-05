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

void remove_duplicate(Node *head) {
    if (head == NULL) return;
    // Convert linked list to vector
    vector<int> values;
    Node *temp = head;
    while (temp != NULL) {
        values.push_back(temp->val);
        temp = temp->next;
    }

    // Sort the vector
    sort(values.begin(), values.end());

    // Check for consecutive duplicates
    for (size_t i = 1; i < values.size(); ++i) {
        if (values[i] == values[i - 1]) {
            // Duplicate found
            // remove it
        }
    }
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
    return 0;
}
