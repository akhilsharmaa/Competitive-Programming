#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

// ACCEPTED :) 
Node * insert(Node * root, int data) {
    // Root is NULL
    if (!root) return new Node(data);
    
    // going LEFT or RIGHT 
    if (root -> data > data){
        root -> left = insert(root->left , data);
    }
    else 
        root -> right = insert(root->right , data);
    
    return root;
}
