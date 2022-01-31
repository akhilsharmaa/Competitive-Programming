#include <iostream>
using namespace std;

// Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

// ACCEPTED :) 
class Solution{
    public:
    int getMiddle(Node *head){

        // Two Pointers 
        Node *temp = head, *temp_mid = head;

        int count = 0;
        while (temp -> next != NULL){

            if (count % 2 == 0){
                temp_mid = temp_mid -> next;
            }

            count ++;
            temp = temp -> next;
        }
        
        return temp_mid-> data;
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