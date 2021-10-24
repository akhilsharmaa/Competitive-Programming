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

// ACEEPTED :) 5 Points
void postOrder(Node *root) {

    if (root == NULL){
        return;
    }
    

    postOrder(root ->left);
    postOrder(root ->right);
    std:: cout<< root ->data << " ";
}

int main(){

    


   return 0;
}