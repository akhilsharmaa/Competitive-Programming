#include <bits/stdc++.h>
using namespace std;

/* Runtime: 3 ms, faster than 93.29% of C++ online 
   submissions for Reverse Words in a String.
   Memory Usage: 7.5 MB, less than 61.76% of C++ online 
   submissions for Reverse Words in a String.
*/

class Solution {

public:
    string reverseWords(string s) {
        
        stack<string> st;
        string temp = "";
        string ans = "";

        for (int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                if(temp.length() > 0)
                    st.push(temp);
                temp = "";
            }else 
                temp = temp + s[i];
        }
         
        ans+= temp;

        while (!st.empty()){
            ans += " " + st.top();
            st.pop();
        }
        
        if(ans.length() != 0 && ans[0] == ' '){
            ans = ans.substr(1);
        }

        return ans;
    }
};

int main(){

    Solution s;
    string str="the sky is blue";
    cout << s.reverseWords(str);

   return 0;
}