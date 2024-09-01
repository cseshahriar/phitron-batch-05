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

// Function to input the binary tree in level order
Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if(val == -1) return NULL;
    root = new Node(val);
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()) {
        Node* p = q.front();
        q.pop();
        
        int l, r;
        cin >> l >> r;
        
        if(l != -1) {
            p->left = new Node(l);
            q.push(p->left);
        }
        if(r != -1) {
            p->right = new Node(r);
            q.push(p->right);
        }
    }
    return root;
}

int maxLevel = 0;
 
// Function to find the leftview
void leftView(Node* root, int level, vector<int>& ans) {
    if (!root) return;
    if (maxLevel < level) {ans.push_back(root->val);
        maxLevel = level;
    }
    leftView(root->left, level + 1, ans);
}
 
// Function to find the rightview
void rightView(Node* root, int level, vector<int>& ans) {
    if (!root)
        return;
    if (maxLevel < level) {
        ans.push_back(root->val);
        maxLevel = level;
    }
    rightView(root->right, level + 1, ans);
}
 
// Function to print the traversal
vector<int> coneLevel(Node* root)
{
    maxLevel = 0;
    vector<int> ans;
    leftView(root->left, 1, ans);
    reverse(ans.begin(), ans.end());
    maxLevel = 0;
    rightView(root, 1, ans);
    return ans;
}

int main() {
    Node* root = input_tree();
    vector<int> ans = coneLevel(root);
    for (auto it : ans)
        cout << it << " ";
    return 0;
}
