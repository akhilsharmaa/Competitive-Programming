#include <iostream>
using namespace std;

class DoublyLinkedListNode {
     public:
     int data;
     DoublyLinkedListNode* next;
     DoublyLinkedListNode* prev;
     DoublyLinkedListNode(int data){

     }
};



// ACEEPTED :) 
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {

    if (llist == NULL){ return llist;}

    DoublyLinkedListNode *insert = new DoublyLinkedListNode(data);

    if (llist->data >= insert->data){
        llist -> prev = insert;
        insert -> next = llist;
        insert -> prev = nullptr;
        return insert;
    }

    DoublyLinkedListNode *temp = llist;

    while (temp != NULL){
        if (temp -> data >= insert -> data){
            temp -> prev-> next = insert;
            insert -> prev = temp->prev;
            temp -> prev = insert;
            insert -> next = temp;
            break;

        }else if (temp -> next == NULL){
          temp -> next = insert;
          insert -> prev = temp;
          insert -> next = nullptr;
          break;
        }
        
        temp = temp -> next;
    }
    
    return llist;

}



int main(){

    return 0;
}