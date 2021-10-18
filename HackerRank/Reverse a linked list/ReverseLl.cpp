#include <iostream>
using namespace std;


class SinglyLinkedListNode {
   public:
   int data;
   SinglyLinkedListNode* next;
};

SinglyLinkedListNode* head;


SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {

    if(!llist) return llist;


    SinglyLinkedListNode* prev = llist;
    SinglyLinkedListNode* temp = llist ->next;
    llist -> next = nullptr;

    while (temp != NULL){
        SinglyLinkedListNode* next = temp -> next;
        
        temp -> next = prev;
        prev = temp;
        temp = next;
    }

    return prev;
}



int main(){

    


   return 0;
}