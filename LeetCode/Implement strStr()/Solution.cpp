#include <iostream>
using namespace std;

class Solution {
public:
    // ACCEPTED :) 
    int strStr(string haystack, string needle) {
        
         for (int i = 0; i + needle.length() < haystack.length() + 1; ++i) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }

        return -1;
    }
};

int main(){
    Solution s;
    cout<<  s.strStr("aaa", "aaaaa");
    
    return 0;
}