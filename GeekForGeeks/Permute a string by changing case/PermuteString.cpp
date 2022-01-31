#include <bits/stdc++.h>
using namespace std;


void PermuteString(int i, int n, string input , string output, vector<string> &result){
    
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
    
    string input = "ab";
    string output = "";
    vector<string> result;

    PermuteString(0, input.size(), input, output, result);

    for (auto &&i : result)
    {
        cout << i <<  "\n";
    }
    

    return 0;
}