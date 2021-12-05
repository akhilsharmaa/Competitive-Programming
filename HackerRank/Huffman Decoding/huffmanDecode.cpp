#include <bits/stdc++.h>
using namespace std;


typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

// ACCEPTED :) 
void decode_huff(node * root, string s) {

    node * head = root;

    for (int i = 0; i < s.size(); i++){

        if (s[i] == '1'){
            root = root -> right;
        }else if (s[i] == '0'){
            root = root -> left;
        }

        if (root -> left == nullptr && root->right == nullptr){
            cout << root->data;
            root = head;
        }
        

    }
    

}   

int main(){
    

   return 0;
}