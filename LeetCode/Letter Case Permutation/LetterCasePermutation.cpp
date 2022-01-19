#include <bits/stdc++.h>
using namespace std;

/* 
Runtime: 6 ms, faster than 66.91% of C++ online submissions for Letter Case Permutation.
Memory Usage: 10.1 MB, less than 74.01% of C++ online submissions for Letter Case Permutation.
*/

class Solution {
public:
    
    void PermuteString(int i, int n, string input , string output, vector<string> &result){
    
    while(isdigit(input[i])){
        output.push_back(input[i]);
        i++;
    }

    if(i >= n){
        result.push_back(output);
        return;
    }

    string op1 = output;
    string op2 = output;


    op1 += tolower(input[i]);
    op2 += toupper(input[i]);

    PermuteString(i+ 1, n, input , op2, result);
    PermuteString(i+ 1, n, input , op1, result);

    }
    
    vector<string> letterCasePermutation(string s) {
        
        vector<string> result;

        PermuteString(0, s.size(), s, "", result);

        return result;
    }
};