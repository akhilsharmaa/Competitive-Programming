#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
// Runtime: 4 ms, faster than 44.89% of C++ online submissions for Plus One.
// Memory Usage: 8.9 MB, less than 12.55% of C++ online submissions for Plus One.


class Solution {
public:

void helperFunc(vector<int>& digits){
   digits.push_back(0);
   digits[0] = 1;
} 

vector<int> plusOne(vector<int>& digits) {
        
   int n = digits.size();
   
   if(digits[n - 1] != 9){
      digits[n - 1] = (digits[n - 1] + 1);
      return digits;
   }

   for (int i = n - 1; i >= 0; --i){
         if(digits[i] != 9){
            digits[i]++;
            break;
         }
         else {
            if (i == 0 && digits[0] == 9){
               helperFunc(digits);
            }else {
               digits[i] = 0;
            }
         }        
      }
      return digits;
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
    vector<int> v = {9, 9, 9};


   cout << "\n Input : ";
   for (auto &&i : v)
      cout << i ;


    vector<int> re =  s.plusOne(v);



   cout << "\n Output : "; 
   for (auto &&i : re)
      cout << i ;
   


   return 0;
}