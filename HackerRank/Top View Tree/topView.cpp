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
void topView(Node* root) {
    // hd: horizontal distance
    std::queue<std::pair<Node*, int>> Q;  // <Node*, hd>
    std::map<int, int> map;               // <hd, data>

    Q.push({root, 0});

    while (not Q.empty()) {
      const auto& node = Q.front().first;
      const auto& data = node->data;
      const auto& left = node->left;
      const auto& right = node->right;
      const auto& hd = Q.front().second;
      Q.pop();

      if (not map.count(hd)) map[hd] = data;

      if (left) Q.push({left, hd - 1});
      if (right) Q.push({right, hd + 1});
    }

    for (const auto& x : map) std::cout << x.second << ' ';
    std::cout << '\n';
}


int main(){

            /* THE STRUCTURE OF TREE 
                    
                         _____101____                   // LEVEL 0 
                        /            \           
                       /              \
                     102              103               // LEVEL 1
                    /   \            /   \
                   /     \          /     \
                  /       \        /       \
                 104     105      106      107          // LEVEL 2 
                /   \    /  \     /  \     /  \
               108 109  110 111  112 113  114 115       // LEVEL 3
                
            */
    
    // Level 0 
    Node *root = new Node(101);

    // Level 1
    root -> left = new Node(102);
    root -> right = new Node(103);

    // Level 2
    root -> left -> left= new Node(104);
    root -> left -> right = new Node(105);
    root -> right -> left= new Node(106);
    root -> right -> right = new Node(107);

    // Level 3 : Left Root
    root -> left -> left -> left = new Node(108);
    root -> left -> left -> right = new Node(109);
    root -> left -> right -> left = new Node(110);
    root -> left -> right ->right = new Node(111);
    // Level 3 : Right Root
    root -> right -> left -> left = new Node(112);
    root -> right -> left -> right = new Node(113);
    root -> right -> right -> left = new Node(114);
    root -> right -> right -> right = new Node(115);

    topView(root);


    return 0;
}
