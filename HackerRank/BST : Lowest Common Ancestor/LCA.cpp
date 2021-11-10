#include <bits/stdc++.h>
using namespace std;

//The tree node has data, left child and right child 
class Node {
    public:
    int data;
    Node* left;
    Node* right;
};

// ACCEPTED :) 
Node * lca(Node * root, int v1,int v2)
{
    if(root==NULL)
        return NULL;
    if(root->data > v1 && root->data > v2)
        return lca(root->left,v1,v2);
    if(root->data < v1 && root->data < v2)
        return lca(root->right,v1,v2);
       
    return root;
}
