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
void inOrder(Node *root) {

    if (root == NULL){
        return;
    }
    

    inOrder(root ->left);
    std:: cout<< root ->data << " ";
    inOrder(root ->right);
}

int main(){

    


   return 0;
}