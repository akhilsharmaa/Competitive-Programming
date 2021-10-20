#include <iostream>
using namespace std;


class SinglyLinkedListNode {
    public:
    int data;
    SinglyLinkedListNode* next;
        SinglyLinkedListNode(int s){

        }
};


        // ACCPETED :) 
        // Solved By Recursion 
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
        
        SinglyLinkedListNode* p1= head1,*p2= head2, *result, *temp;
        result = temp;
        
        if (head1 == NULL){
                return head2;
        }
        if (head2 == NULL){
            return head1;
        }
        if (head1->data < head2->data){
            head1->next = mergeLists(head1->next, head2);
            return head1;
        }
        else {
            head2->next = mergeLists(head1, head2->next);
            return head2;    
        }
};


int main(){

    


   return 0;
}