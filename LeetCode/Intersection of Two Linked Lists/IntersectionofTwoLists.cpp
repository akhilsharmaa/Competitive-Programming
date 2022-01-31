#include <bits/stdc++.h>
using namespace std;

//  * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/* 
Runtime: 67 ms, faster than 25.85% of C++ online submissions for Intersection of Two Linked Lists.
Memory Usage: 14.6 MB, less than 30.46% of C++ online submissions for Intersection of Two Linked Lists.
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *tempA = headA ;
        ListNode *tempB = headB ;

        while (tempA != tempB){
            tempA = tempA != nullptr ? tempA ->next : headB;
            tempB = tempB != nullptr ? tempB ->next : headA;
        }
        
        return tempA;
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