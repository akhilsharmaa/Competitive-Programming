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

int main(){

    Solution s;
    cout<< s.lengthOfLongestSubstring("pwwkew");

   return 0;
}