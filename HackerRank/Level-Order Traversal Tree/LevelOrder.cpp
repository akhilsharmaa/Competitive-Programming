#include <iostream>
#include <queue>
using namespace std;

// class Node {
//     public:
//         int data;
//         Node *left;
//         Node *right;
//         Node(int d) {
//             data = d;
//             left = NULL;
//             right = NULL;
//         }
// };

// Binary Tree - Structure 
struct Node{
   int data; // Data to be stored 
   struct Node *left, *right;
    Node(int val){
        data  = val;
        left = right = NULL;
    }
};  



// ACCPETED :) 
void levelOrder(Node * root) {

    queue<Node*> S;  
    S.push(root); 

    while (!S.empty()){

        Node *t = S.front();
        cout<< t -> data <<" " ;

        if (t->left != NULL){
          S.push(t->left);
        }
        
        if (t->right != NULL){
          S.push(t->right);
        }
        
        S.pop();
    }
    
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

    return 0;
}