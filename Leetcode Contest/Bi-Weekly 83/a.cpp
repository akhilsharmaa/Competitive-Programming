#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        
        if(root -> val == 0 || root -> val == 1){
            return root -> val;
        }   

        if(root -> val == 2){
            return evaluateTree(root-> left) || evaluateTree(root->right);
        }else if(root -> val == 3){
            return evaluateTree(root-> left) && evaluateTree(root->right);
        }

    }
};