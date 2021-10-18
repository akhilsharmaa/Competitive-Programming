#include <iostream>
using namespace std;

class SinglyLinkedListNode {
    public:
    int data;
    SinglyLinkedListNode* next;
};

// ACCEPTED :) 
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {

    SinglyLinkedListNode *temp = llist;

    int i = 0;
    while (i <= position){
        temp  = temp->next;
        i ++;
    }

    temp -> next = (temp->next) ->next;

    delete temp;

    
}


int main(){

    


   return 0;
}