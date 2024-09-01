#include <bits/stdc++.h>
using namespace std;

template <typename T>

class BinaryTreeNode {
    public :
        T data;
        BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // base case
    if(root == NULL) return false; // root rull, painai
    if(root->data == x) return true;  // data is = x
    bool l = isNodePresent(root->left, x); // left ans
    bool r = isNodePresent(root->right, x); // righ ans
    // if(l == true  || r == true) return false;
    // else return false;
    return(l || r);
}

int main() {
    return 0;
}