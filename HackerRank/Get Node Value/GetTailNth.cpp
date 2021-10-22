#include <iostream>
using namespace std;

class SinglyLinkedListNode {
    public: 
    int data;
    SinglyLinkedListNode* next;
};

// ACCEPTED :) 
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    
    SinglyLinkedListNode *temp = llist, *toReturn = llist;

    int count = 0; 
    while ( temp ->next != NULL){
        
        if (count >= positionFromTail){
            toReturn = toReturn ->next;
        }
        
        temp = temp -> next;
        count++;
    }
    
    return toReturn ->data;
}

int main(){

    


   return 0;
}