#include <iostream>
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

// ACCPETED :) 
int height(Node* root) {
    int leftHieght, rightHieght;

    if (root == NULL)
    return -1; 
    
    
    leftHieght = height(root -> left);
    rightHieght = height(root -> right);

    return max(leftHieght, rightHieght) +1 ;
}



int main(){

    


   return 0;
}