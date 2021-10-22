#include <iostream>
using namespace std;

class SinglyLinkedListNode {
    public: 
    int data;
    SinglyLinkedListNode* next;
};

// ACCEPTED :) 
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    
    if(llist == NULL || llist->next == NULL) return llist;
    SinglyLinkedListNode *current=llist,*temp;


    while(current->next != NULL){
           
           if(current->data == current->next->data){
               temp = current->next->next;
               current->next = temp;
           }
           else
           current=current->next;
    }
    
    return llist;
}
