#include <bits/stdc++.h>
using namespace std;

// The Node struct is defined as follows:
struct Node {
	int data;
	Node* left;
	Node* right;
};

// ACCEPTED :) 
vector<int> arr;

void InOrderTraversal(Node* root) {

    if (root == NULL)return; // Base Case

    InOrderTraversal(root -> left);
    arr.push_back(root->data);
    InOrderTraversal(root -> right);
}

bool checkBST(Node* root) {

    // Inserting the elements in the order of InOrder...
    InOrderTraversal(root); 

    // Checking Is Array SORTED or NOT
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] <= arr[i + 1])return false;
    }

    return true;
}

int main(){
   

   return 0;
}