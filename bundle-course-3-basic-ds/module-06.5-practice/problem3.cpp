#include <bits/stdc++.h>
using namespace std;
/**
 * Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

2 4 6 8 10 -1
6

1 2 3 4 5 6 -1
3 4
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

void get_middle(Node* head)
{
    // vector to store the values of all nodes
    vector<int> v;
    // Traverse through the entire linked list and push all
    // the values into the vector
    while (head != NULL) {
        v.push_back(head->val);
        head = head->next;
    }
    // Find the middle index
    int middleIdx = v.size() / 2;
    // Return the value stored at the middle index
    if (v.size() % 2 == 0) {
        cout << v[middleIdx-1] << v[middleIdx] << endl;
    }
    else {
        cout << v[middleIdx] << endl;
    }
}


int main() {
    int val;
    Node * head = NULL;

    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }

    get_middle(head);
    return 0;
}