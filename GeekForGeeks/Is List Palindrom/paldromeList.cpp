#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


// ACCEPTED :) 
class Solution{
  public:
    bool isPalindrome(Node *head){

        Node *temp =  head;
        int a = 0, b = 0 , multiplies = 1;

        while (temp != NULL){
            a = (a * 10) + (temp-> data);
            
            // Collecting right to left
            b = b + (temp->data  * multiplies);
            multiplies = multiplies * 10;

            temp = temp -> next;
        }
        
        if(a == b) return true;
        return false;
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