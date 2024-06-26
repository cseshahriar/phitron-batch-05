#include <bits/stdc++.h>
using namespace std;

/*
A linked list is a fundamental data structure in computer 
science. It consists of nodes where each node contains data 
and a reference (link) to the next node in the sequence. 
This allows for dynamic memory allocation and efficient 
insertion and deletion operations compared to arrays.
*/

class Node {
    public:
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }

};

void print_linked_list(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    head->next = a;

    print_linked_list(head);
    return 0;
}