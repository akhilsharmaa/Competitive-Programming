#include <iostream>
using namespace std;

class SinglyLinkedListNode {
    public:
    int data;
    SinglyLinkedListNode* next;
};

// ACCEPTED :) 
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    if(llist == NULL)
        return llist;

    SinglyLinkedListNode *current = llist;

    // We have to remove the head of ll
    if(position == 0)
    {
        current = llist->next;
        free(llist);
        return current;
    }

    while(current != NULL && position > 1)
    {
        position--;
        current = current->next;
    }

    if(current == NULL) return llist; 

    SinglyLinkedListNode *next = current->next->next;
    free(current->next);
    current->next = next; 
    return llist;
}


int main(){

    


   return 0;
}