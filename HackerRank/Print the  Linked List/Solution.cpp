#include <iostream>
using namespace std;

 //For your reference:

 class SinglyLinkedListNode {
     public:
     int data;
     SinglyLinkedListNode* next;
 };

 
// ACCEPTED :) 
void printLinkedList(SinglyLinkedListNode* head) {

    if (head == NULL){
        return;
    }
    
    SinglyLinkedListNode* temp = head;
    while (temp != NULL){

        cout<< temp-> data<< endl; 
        temp = temp-> next;
    }
}

int main(){

    


   return 0;
}