
#include <iostream>
#include <vector>
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

// ACCEPTED :) 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
    
        if(p == NULL && q == NULL){
            return true;
        }else if(p != NULL && q == NULL){
            return false;
        }else if(p == NULL && q != NULL){
            return false;
        }
        
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};


  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

int main(){

    
    // Level 0 
    TreeNode *root = new TreeNode(101);

    root -> left = new TreeNode(102);
    root -> right = new TreeNode(103);

    
    // Level 0 
    TreeNode *root2 = new TreeNode(101);

    root2 -> left = new TreeNode(102);
    root2 -> right = new TreeNode(103);

    Solution s;
    s.isSameTree(root, root2);

   return 0;
}