#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-05/challenges/browser-history-1

class Node {
    public:
        string visit_address;
        Node* next;
        Node* prev;

    Node(string visit_address) {
        this->visit_address = visit_address;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string address) { 
    Node* newNode = new Node(address);
    if(tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

Node* find_node(Node* head, string address) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->visit_address == address) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while(true) {
        cin >> val;
        if(val == "end") break;
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    
    Node* current = head;
    string command;

    while(q--) {
        cin >> command;
        if(command == "visit") {
            string address;
            cin >> address;
            Node* search_node = find_node(head, address);
            if(search_node) {
                current = search_node;
                cout << current->visit_address << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if(command == "next") {
            if(current && current->next) {
                current = current->next;
                cout << current->visit_address << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if(command == "prev") {
            if(current && current->prev) {
                current = current->prev;
                cout << current->visit_address << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}