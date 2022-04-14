#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) :
             val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *curr = root;    

        while (curr){

            if( curr->val == val)
                return curr;
            else if(curr->val > val){
                curr = curr->left ;
            }else {
                curr = curr->right ;
            }

        }
        
        return curr;
    }
};

int main(){

   return 0;
}