
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/* 
    ACCEPTED 
    Runtime: 12 ms, faster than 49.71% of C++ 
    online submissions for Remove Duplicates 
    from Sorted List.

    Memory Usage: 11.7 MB, less than 34.34% 
    of C++ online submissions for Remove Duplicates 
    from Sorted List.
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
                
        ListNode* temp=head;
        
        if(head==nullptr){
            return nullptr;
        }

        while(temp->next!=nullptr){
            if(temp->val==temp->next->val)
            {
                ListNode *ptr=temp->next;
                temp->next=ptr->next;
                delete ptr;
            }
            else
            temp=temp->next;
        }
        return head;

    }
};