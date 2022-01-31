#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int longest = 0;    

        for (int i = 0; i < s.length(); i++){
            
            if (s[i] != s[i+1]){
                longest ++;
            }else{
            }
        }
        
        return longest;

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
    cout<< s.lengthOfLongestSubstring("pwwkew");

   return 0;
}