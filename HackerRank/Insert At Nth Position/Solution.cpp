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
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
      SinglyLinkedListNode*node = new SinglyLinkedListNode(data);
    node -> data = data;

    if (llist == NULL) {
        return node;
    }
    else {
        SinglyLinkedListNode *last = llist;
        int p = 0;

        if (position == 0) {
            node -> next = llist;
            return node;
        }

        while (last != NULL) {
            if (p == position - 1) {
                node -> next = last -> next;
                last -> next = node;
            } else {
                last = last -> next;
            }
            p = p + 1;
        }
        return llist; 
    }
    
}

int main(){

   return 0;
}