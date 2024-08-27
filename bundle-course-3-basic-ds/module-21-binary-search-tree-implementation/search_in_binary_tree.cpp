#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()) {
        // 1. ber kore ano
        Node* p = q.front(); // parent
        q.pop();

        // 2. jabotiy ja kaj ache
        int l, r;
        cin >> l >> r;
        Node* my_left;
        Node* my_right;
        if(l == -1) my_left = NULL;
        else my_left = new Node(l);

        if(r == -1) my_right = NULL;
        else my_right = new Node(r);

        p->left = my_left;
        p->right = my_right;

        // 3. children gulo ke push kore
        if(p->left) q.push(p->left);

        if(p->right) q.push(p->right);
    }
    return root;
}

void level_order(Node* root) {
    // level order traverse
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        // 1. ber kore ana
        Node* f = q.front();
        q.pop();

        //2 jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

bool search(Node* root, int x) {
    if(root == NULL) return false;
    if(root->val == x) {
        return true;
    }
    if(x < root->val) {
        return search(root->left, x);
    } else {
        return search(root->right, x);
    }
}

int main() {
    Node* root = input_tree();
    level_order(root);
    cout << endl;
    if(search(root, 6)) cout << "Yes, Found" << endl;
    else cout << "No, Not Found" << endl;
    return 0;
}