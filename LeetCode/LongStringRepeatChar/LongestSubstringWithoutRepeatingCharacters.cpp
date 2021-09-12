#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        for (int i = 0; i < s.length(); i++){
            cout<< s[i] ;
        }

        return s.length();
    }
};

int main(){

    Solution s;
    cout<<s.lengthOfLongestSubstring("abcdaads");
    return 0;
}