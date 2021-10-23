#include <iostream>
using namespace std;

class SinglyLinkedListNode {
    public:
    int data;
    SinglyLinkedListNode* next;
};

bool has_cycle(SinglyLinkedListNode* head) {

    if (head == NULL){return false;}
    SinglyLinkedListNode *fast  = head ->next ,  *slow = head; 

    while (fast != NULL && fast -> next != NULL && slow != NULL){
        if (fast == slow){
            return true;
        }
         
        fast = fast -> next ->next;
        slow = slow ->next;
    }
    


    return false;
}

int main(){

    


   return 0;
}