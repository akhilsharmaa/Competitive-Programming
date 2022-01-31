#include <bits/stdc++.h>
using namespace std;

class Solution {
public: 
    string multiply(string num1, string num2) {
             
        int m = num2.length()-1;
        int n = num1.length()-1;

        //! BOUNDARY CASES 
        if (m == 0 || n == 0 || num1 == "0" || num2 == "0")return "0";
        if ("1" == num1) return num2;
        if ("1" == num2) return num1;
        
        // Result can be maximum of length M + N
        int result[m + n];

        for (int i = m; i >= 0; i--){
            for (int j = n; j >= 0; j--){
                cout<<"j = " << j << " | i = "<< i <<endl;
            }
        }

    return "sd";
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
    s.multiply("3452435", "45123");

    return 0;
}
