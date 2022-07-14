/*
    Runtime: 4 ms, faster than 74.03% of C++ online submissions for Binary Tree Level Order Traversal.
    Memory Usage: 12.5 MB, less than 61.71% of C++ online submissions for Binary Tree Level Order Traversal.
*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if ( !root ) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            vector<int> temp ;
            for ( int i = 0 ; i < sz ; i ++){
                root = q.front();
                q.pop();
                temp.push_back(root -> val);
                
                if ( root -> left ) q.push(root -> left );
                if ( root -> right ) q.push( root -> right);
                
            }
            
            ans.push_back(temp);
        }
        
        return ans;
    }
};