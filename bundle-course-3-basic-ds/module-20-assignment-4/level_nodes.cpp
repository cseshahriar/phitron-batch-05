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

void print_nodes_at_level(Node* root, int level) {
    if(root == NULL) {
        cout << "Invalid" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    int current_level = 0;

    while(!q.empty()) {
        int level_size  = q.size();
        if(current_level  == level) {
            vector<int> nodes_at_level;
            while(level_size--) {
                Node* node = q.front();
                q.pop();
                nodes_at_level.push_back(node->val);
            }
            for(int value: nodes_at_level) {
                cout << value << " ";
            }
            cout << endl;
            return;
        }

        while(level_size--) {
            Node* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        current_level++;
    }
    cout << "Invalid" << endl;
}

int main() {
    Node* root = input_tree();
    int x;
    cin >> x;
    print_nodes_at_level(root, x);
    return 0;
}