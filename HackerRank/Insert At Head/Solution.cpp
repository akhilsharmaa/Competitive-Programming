#include <iostream>
using namespace std;

class SinglyLinkedListNode {
    public: 
    int data;
    SinglyLinkedListNode* next;
    SinglyLinkedListNode(int val){
        data = val;
    }
};

// ACCEPTED :) 
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    temp-> data = data;
    temp-> next = NULL;

    if (llist == NULL){return llist = temp;}
    else{

        temp -> next = llist;
        llist = temp;
    }

    return llist;
}

int main(){

    


   return 0;
}