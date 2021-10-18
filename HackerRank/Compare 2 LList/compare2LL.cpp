#include <iostream>
using namespace std;

class SinglyLinkedListNode {
    public:
    int data;
    SinglyLinkedListNode* next;
};

// ACCEPTED :) Earned 5 Pointes
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    bool r = true;
    SinglyLinkedListNode* temp1 = head1, *temp2 = head2;

    while (1){
        if (temp1->data != temp2 -> data){
            return false;
        }

        if ((temp1->next == NULL && temp2->next != NULL) || 
            (temp1->next != NULL && temp2->next == NULL)){
            return false;
        }
        
        if(temp1->next == NULL && temp2 -> next == NULL){
            break;
        }
        
        temp1=temp1->next;
        temp2=temp2->next;
    }

    return r;
}

int main(){

    


   return 0;
}