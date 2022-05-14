#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/*  Runtime: 22 ms, faster than 89.51% of C++ 
    online submissions for Merge k Sorted Lists.
    Memory Usage: 14 MB, less than 22.46% of C++ 
    online submissions for Merge k Sorted Lists.
*/

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n = lists.size();
        vector<int> v;

        for (int i = 0; i < n; i++){
            ListNode *temp = lists[i];
            while (temp){
                v.push_back(temp->val);
                temp = temp -> next;
            }
        }

        sort(v.begin(), v.end());
        ListNode *root;
        ListNode *temp = root;

        for (int i = 0; i < v.size(); i++){
            ListNode *newNode = new ListNode(v[i]);
            temp->next = newNode;
            temp = newNode;
        }

        return root->next;
    }
};

int main(){


   return 0;
}