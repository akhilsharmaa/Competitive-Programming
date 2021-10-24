#include <iostream>
using namespace std;

class DoublyLinkedListNode {
    public:
    int data;
    DoublyLinkedListNode* next;
    DoublyLinkedListNode* prev;
};


// ACCEPTED :) 
DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {

    if (llist == NULL)return llist;
    
    DoublyLinkedListNode* p = llist;
    DoublyLinkedListNode* q = p->next;

    while(p->next != NULL){
        q = p->next;
        p->next = p->prev;
        p->prev = q;
        p = p->prev;
    }
    p->next = p->prev;
    p->prev = NULL;
    return p;
}

int main(){

    


   return 0;
}