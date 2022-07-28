#include <bits/stdc++.h>
using namespace std;


// Accepted :) 
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

Node* insert(Node *head,int data)
{
    if(head == nullptr){
        return new Node(data);
    }
    
    Node *temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    
    temp->next = new Node(data);          
    return head;
}