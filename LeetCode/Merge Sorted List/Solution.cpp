#include <iostream>
using namespace std;




struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1, *p2 = l2;
        ListNode *mergedListNode;

        //? Creating the Merged Linked List
        if (p1 -> val < p2-> val){ 
            mergedListNode = new ListNode(p1 -> val);}
        else {mergedListNode  = new ListNode(p2 -> val);}

        // Temprory pointer of MergedLinked List
        ListNode *tempMerged = mergedListNode;
        // tempMerged  = mergedListNode -> next;

        while (p2  != NULL && p2 != NULL){
            if (p1 -> val < p2-> val){
                
                ListNode *toAddNode = new ListNode(p1-> val);
                tempMerged -> next = toAddNode;
                p1 = p1 -> next;
            }else{
                ListNode *toAddNode = new ListNode(p2-> val);
                tempMerged -> next = toAddNode;
                p2 = p2 -> next;
            }

            tempMerged = tempMerged -> next;
        }
        
        return mergedListNode;
    }   




    //?  Insert the Node Tail of Linked-List
    void insertElement(ListNode* &head, int data){
        ListNode* toInsertNode = new ListNode(data);
        ListNode* temp = head;
        while (temp->next != NULL){   
            temp = temp->next;
        }
        temp-> next = toInsertNode;
    }

    //? Funciton to Print a Linked-List
    void displayList(ListNode* &head){
        ListNode *temp = head;
        while (temp-> next != NULL){  
            cout<< temp ->val << " -> " ;
            temp = temp->next;
        } 
        cout<< temp -> val ;
        cout<< endl ;
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

    Solution s;
    ListNode* head = new ListNode(101);
    s.insertElement(head,102);
    s.insertElement(head,104);
    cout<< "L1 :      " ; s.displayList(head);

    ListNode* head2 = new ListNode(101);
    s.insertElement(head2, 103);
    s.insertElement(head2, 104);
    cout<< "L2 :      " ; s.displayList(head2);


    ListNode *merged =  s.mergeTwoLists(head, head2);
    cout<< "Merged :- "; s.displayList(merged) ;


   return 0;
}
