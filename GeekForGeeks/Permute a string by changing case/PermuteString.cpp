#include <bits/stdc++.h>
using namespace std;


void PermuteString(int i, int n, string input , string output, vector<string> &result){
    
    if(i >= n -1){
        result.push_back(output);
        return;
    }

    string op1 = output;
    string op2 = output;

    if(isdigit(input[i])){
        op1.push_back(input[i]);
        op2.push_back(input[i]);
        i++;
    }

    op1 += tolower(input[i]);
    op2 += toupper(input[i]);

    PermuteString(i+ 1, n, input , op2, result);
    PermuteString(i+ 1, n, input , op1, result);

}

int main(){
    
    string input = "a1b2";
    string output = "";
    vector<string> result;

    PermuteString(0, input.size(), input, output, result);

    for (auto &&i : result)
    {
        cout << i <<  "\n";
    }
    

    return 0;
}