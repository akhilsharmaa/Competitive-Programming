
//  * Definition for singly-linked list.
 struct ListNode {    int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
       // Reverse the first half list.
        ListNode *reverse = nullptr, *fast = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            const auto head_next = head->next;
            
            head->next = reverse;
            reverse = head;

            head = head_next;
        }

        // If the number of the nodes is odd,
        // set the head of the tail list to the next of the median node.
        ListNode *tail = fast ? head->next : head;

        // Compare the reversed first half list with the second half list.
        // And restore the reversed first half list.
        bool is_palindrome = true;
        while (reverse) {
            
            is_palindrome = is_palindrome && reverse->val == tail->val;
            const auto reverse_next = reverse->next;
            reverse->next = head;
            head = reverse;
            reverse = reverse_next;
            
            tail = tail->next;
        }
            
        return is_palindrome; 
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
    ListNode* head = new ListNode(7);
    s.insertElement(head,2);
    s.insertElement(head,8);
    s.isPalindrome(head);

   return 0;
}