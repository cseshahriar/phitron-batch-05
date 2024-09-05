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

void read_leef_node(Node* root, vector<int>& leaves) {
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL){
        leaves.push_back(root->val);
    }
    read_leef_node(root->left, leaves);
    read_leef_node(root->right, leaves);
}


int main() {
    Node* root = input_tree();
    vector<int> leaves;
    read_leef_node(root, leaves);
    sort(leaves.begin(), leaves.end(), greater<int>());
    for(int val : leaves) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}