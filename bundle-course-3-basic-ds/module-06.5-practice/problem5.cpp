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

bool isSorted(Node *head) {
    if (head == NULL || head->next == NULL) {
        return true; // An empty or single-element list is considered sorted
    }

    Node *current = head;
    while (current->next != NULL) {
        if (current->val > current->next->val) {
            return false; // Found an inversion, list is not sorted
        }
        current = current->next;
    }
    return true;
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
    // Check if linked list is sorted
    if (isSorted(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}