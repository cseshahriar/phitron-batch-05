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

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    // link bad practice
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // printing single linked list
    Node* temp = head; // for hed not lose
    while (temp != NULL) 
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    
    cout << endl;
    Node* temp2 = head; // for hed not lose
    while (temp2 != NULL) 
    {
        cout << temp2->val << endl;
        temp2 = temp2->next;
    }
    
    return 0;
}