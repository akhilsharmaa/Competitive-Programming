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

map<Node*, int> dist;

void travel(Node * root, int n){
    if (root->left != NULL){
        dist[root->left] = n-1;
        travel(root->left , n-1);
    }
    if (root->right != NULL){
        dist[root->right] = n+1;
        travel(root->right , n+1);
    }
    return;
}

void topView(Node * root) {
    if(root == NULL) return;
    travel(root, 0); // TRAVEL 

    map<int, int> view;
    view[0]= root->data;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()){
        Node* curr = q.front();
        q.pop();

        if(curr) cout << " "<< curr -> data;

        if(curr -> left != NULL) {
            int k = dist[curr->left];
            if (view.count(k)== 0){
                view[k]== curr  ->left ->data;
            }
            q.push(curr ->left);
        }
        if(curr -> right != NULL) {
            int k = dist[curr->right];
            if (view.count(k)== 0){
                view[k]== curr  ->right ->data;
            }
            q.push(curr ->right);
        }
    }

    for (auto i : view)
        cout<< i.second << " ";
    return;

}

