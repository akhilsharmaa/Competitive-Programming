#include <iostream>
using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ACCEPTED :) 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

         ListNode* fast;
        ListNode* slow;

        fast = head;
        slow = head;

        while(n){
            fast = fast->next;
            n--;
        }

        if(fast == NULL){
            head = head->next;
            return head;
        }

        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        }

        if(slow->next && slow->next->next){
            slow->next = slow->next->next;
        } else {
            slow->next = NULL;
        }

        return head;
    }


    // Insert A Value at the END of the Node  
    void insertAtTail(ListNode* &head, int val){
         ListNode* n = new ListNode(val);

         if (head==NULL){ head = n;  return; }
 
         ListNode* temp = head;
        while (temp -> next != NULL){
             temp = temp-> next;  
        }

         temp -> next = n ; 
    }

    void display(ListNode* head){
        ListNode* temp = head;
    
        while (temp != NULL){
            cout<<temp -> val <<" > ";
            temp = temp-> next;
        }
        cout<<"NULL";
        cout<<endl;
    }

};


  /* 
 __________________________________________
 |                                        |
 |  If this code helps you ;)             |
 |                                        |
 |  Please give a STAR                    |
 |  & FOLLOW_ME on Github                 |
 |                                        |
 |  ID - @akhilsharmaa                    |
 |                                        |
 |  C++ CODE BY AKHILESH                  |
 |________________________________________|
 */

int main(){


    ListNode* head = new ListNode(101);
    Solution s;
    // Inserting the Value at tail.
    s.insertAtTail(head, 102);
    s.insertAtTail(head, 103);
    s.insertAtTail(head, 104);
    s.insertAtTail(head, 105);

    // Display All of 
    s.display(head);

    cout<< "----------"<<endl ;
    s.removeNthFromEnd(head, 2);
    s.display(head);

   return 0;
}