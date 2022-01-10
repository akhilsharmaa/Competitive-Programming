#include <bits/stdc++.h>
using namespace std;

//  * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:

    int findLength(ListNode *headA){
    
    int length = 0;   
    ListNode *temp = headA;
    while (temp -> next != NULL){
        length++;
        temp = temp->next;
    }
    return length;
    }

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
    int ALength = findLength(headA), BLength = findLength(headB);
    int diff = max(ALength, BLength) -  min(ALength, BLength);

    ListNode *toSkipTemp , *notSkipped;
    if(ALength > BLength){
        toSkipTemp = headA;
        notSkipped = headB;
    }else{
        toSkipTemp = headB;
        notSkipped = headA;
    }
    
    for (int i = 0; i < diff && toSkipTemp != NULL; i++){
        toSkipTemp =  toSkipTemp ->next;
    }   

    while (toSkipTemp ->next != NULL && notSkipped ->next != NULL){

        if(toSkipTemp == notSkipped){
            return toSkipTemp;
        }

        toSkipTemp =  toSkipTemp ->next;
        notSkipped =  notSkipped ->next;
    }
    
    return new ListNode(0);
    }

};


int main(){
    
    return 0;
}
