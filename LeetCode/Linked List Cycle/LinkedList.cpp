#include <bits/stdc++.h>
using namespace std;

/*  ACCEPTED :) 
Runtime: 10 ms, faster than 72.61% of C++ online submissions for Linked List Cycle.
Memory Usage: 8 MB, less than 81.63% of C++ online submissions for Linked List Cycle. */

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
         if (head == NULL || head->next == NULL) {
            return false;
        } else {
            ListNode *slow = head, *fast = head->next;
            
            while (slow != fast) {
                if (fast == NULL || fast->next == NULL) {
                    return false;
                } else {
                    slow = slow->next;
                    fast = fast->next->next;
                }
            }
            return true;
         }
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
    

    return 0;
}