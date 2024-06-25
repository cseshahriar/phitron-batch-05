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

bool has_duplicate(Node *head) {
    if (head == NULL) return false;

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
            return true; // Duplicate found
        }
    }
    return false; // No duplicates
}

int main() {
    int val;
    Node * head = NULL;

    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }

    if (has_duplicate(head)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}