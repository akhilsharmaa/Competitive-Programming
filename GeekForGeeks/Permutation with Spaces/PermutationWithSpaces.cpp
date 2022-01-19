#include <bits/stdc++.h>
using namespace std;

// SOLVED & ACCEPTED :) 

class Solution{
public:
    void gen(string str, string op, vector<string> &res){

        if(str.length() == 0){
            res.push_back(op); 
            return;
        }

        string op1 = op;
        string op2 = op;

        op1.push_back(' ');
        op1.push_back(str[0]);
        op2.push_back(str[0]);

        str.erase(str.begin() + 0);

        gen(str, op1, res);
        gen(str, op2, res);

        return;
    }

    vector<string> permutation(string S){
        vector<string > res;
        string op;
        op.push_back(S[0]); 

        S.erase(S.begin() + 0);
        gen(S, op, res);

        return res;
    }
};


int main(){
    
    Solution s;

    string str = "ABC";
    vector<string> vet = s.permutation(str);

    for (auto && i : vet) {
            cout << i <<  '\n';
    }

    return 0;
}