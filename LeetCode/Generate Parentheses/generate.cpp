#include <bits/stdc++.h>
using namespace std;

/*
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Generate Parentheses.
    Memory Usage: 11.4 MB, less than 81.84% of C++ online submissions for Generate Parentheses.
 */

class Solution {
public:

    void generate(string &s, int open, int close,int n, vector<string> &res){

        if(open == 0 && close == 0){
            res.push_back(s);
            return;
        }
        
        if(open > 0){
            s += '(';
            generate(s, open - 1, close, n, res);
            s.pop_back();
        }
        
        
        if(close > 0){
            if(open < close){
            s += ')';
            generate(s, open, close - 1, n, res);
            s.pop_back();
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string> res;
        generate(s, n, n, n, res);
        return res;
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
    vector<string> v = s.generateParenthesis(3);

    for (auto && i : v)
    {
        cout << i << "\n";
    }cout << "\n";
    

    return 0;
}