#include <iostream>
using namespace std;




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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode *temp = dummy;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry){
            int sum = 0;

            if (l1 != NULL){
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            
            if (l2 != NULL){
                sum += l2 -> val;
                l2 = l2 -> next;
            }

            sum += carry;
            carry = sum /10;
            ListNode *node = new ListNode (sum % 10);
            temp -> next = node ;
            temp = temp -> next;
        }
        
        return dummy-> next;
    }



    //?  Insert the Node Tail of Linked-List
    void insertElement(ListNode* &l1, int data){
        ListNode* toInsertNode = new ListNode(data);
        ListNode* temp = l1;
        while (temp->next != NULL){   
            temp = temp->next;
        }
        temp-> next = toInsertNode;
    }


    //? Funciton to Print a Linked-List
    void displayList(ListNode* &l1){
        ListNode *temp = l1;
        while (temp-> next != NULL){  
            cout<< temp ->val << " -> " ;
            temp = temp->next;
        } 
        cout<< temp -> val ;
        cout<< endl ;
    }
};

int main(){

    Solution s;
    ListNode* l1 = new ListNode(3);
    s.insertElement(l1,4);
    s.insertElement(l1,2);
    cout<< "l1  : "; s.displayList(l1);

    ListNode* l2 = new ListNode(4);
    s.insertElement(l2, 6);
    s.insertElement(l2, 5);
    cout<< "l2  : " ; s.displayList(l2);


    ListNode *merged =  s.addTwoNumbers(l1, l2);
    cout<< "Sum : "; s.displayList(merged) ;


   return 0;
}
