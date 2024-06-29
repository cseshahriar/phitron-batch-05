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


void print_position(Node* head, long long int x) {
    int position = 0;
    bool found = false;
    Node* temp = head;
    while(temp != NULL) {
        position++;
        if(temp->val == x) {
            found = true;
            break;
        }
        temp = temp->next;
    }

    if(found == true) {
        cout << position - 1 << endl;
    } else {
        cout << "-1" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {     
        long long int val;
        Node * head = NULL;
        Node * tail = NULL;
        while(true) {
            cin >> val;
            if(val == -1) break;
            insert_at_tail(head, tail, val);
        }
        long long int x;
        cin >> x;
        print_position(head, x);
    }
    return 0;
}
