#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};


void print_normal(Node* head) {
    cout << "L -> ";
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node* tail) {
    cout << "R -> ";
    Node* tmp = tail;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}


void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
    if (tail == NULL) {
        tail = head;
    }
}

void insert_at_position(Node*& head, Node*& tail, int pos, int val) {
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < pos; ++i) {
        if (tmp == NULL || tmp->next == NULL) {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    if (tmp->next != NULL) {
        tmp->next->prev = newNode;
    } else {
        tail = newNode;
    }
    tmp->next = newNode;
}

int size(Node* head) {
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x > size(head)) {
            cout << "Invalid" << endl;
        } else if (x == 0) {
            insert_at_head(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        } else {
            insert_at_position(head, tail, x, v);
            print_normal(head);
            print_reverse(tail);
        }
    }
    return 0;
}