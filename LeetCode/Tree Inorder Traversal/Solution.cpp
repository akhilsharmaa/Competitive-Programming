#include <iostream>
#include <vector>
#include<stack>
using namespace std;

// Definition for a binary tree TreeNode.
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
    // ACCEPTED :) 
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrder; 
        stack<TreeNode* > st;

        TreeNode *tempRoot = root;
        while (true){
            if (tempRoot != NULL){
                st.push(tempRoot);
                tempRoot = tempRoot -> left;
            }else{
                if (st.empty()) break;
                
                tempRoot = st.top();
                st.pop();
                inOrder.push_back(tempRoot -> val);
                tempRoot  = tempRoot -> right;
            }
        }
                
        return inOrder;
    }
};


int main(){

  /*    1       
       / \
      /   \
     2     3 
    / \   / \   
   4   5 6   7      */ 

    // Root Node of the tree  
    TreeNode* root = new TreeNode(1);

    // Level 1
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);

    // Level 2
    root -> left -> left= new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left= new TreeNode(6);
    root -> right -> right = new TreeNode(7);

    Solution s;
    vector<int> a = s.inorderTraversal(root);
    for (auto &&i : a) {
        cout<< i << " ";
    }
    

    return 0;
}