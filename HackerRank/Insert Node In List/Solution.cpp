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
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    temp-> data = data;
    temp-> next = NULL;

    if (head == NULL){return head = temp;}
    else{

        temp-> data = data;
        SinglyLinkedListNode * p;
        p = head;

        while (p-> next != NULL){


            p = p-> next;
        }

        p-> next = temp;
    }


    return head;
}
