#include <bits/stdc++.h>
using namespace std;

/* ACCEPTED :) 
    Runtime: 0 ms, faster than 100.00% of C++ online submissions for Excel Sheet Column Number.
    Memory Usage: 6 MB, less than 38.28% of C++ online submissions for Excel Sheet Column Number.
 */

class Solution{
public:
    int titleToNumber(string columnTitle){

        long long result = 0;
        long long multiples = 1;

        int n = columnTitle.size();
        for (int i = n-1; i >= 0; i--){

            int letter;
            switch (columnTitle[i]){
            case 'A':letter = 1;break;
            case 'B':letter = 2;break;
            case 'C':letter = 3;break;
            case 'D':letter = 4;break;
            case 'E':letter = 5;break;
            case 'F':letter = 6;break;
            case 'G':letter = 7;break;
            case 'H':letter = 8;break;
            case 'I':letter = 9;break;
            case 'J':letter = 10;break;
            case 'K':letter = 11;break;
            case 'L':letter = 12;break;
            case 'M':letter = 13;break;
            case 'N':letter = 14;break;
            case 'O':letter = 15;break;
            case 'P':letter = 16;break;
            case 'Q':letter = 17;break;
            case 'R':letter = 18;break;
            case 'S':letter = 19;break;
            case 'T':letter = 20;break;
            case 'U':letter = 21;break;
            case 'V':letter = 22;break;
            case 'W':letter = 23;break;
            case 'X':letter = 24;break;
            case 'Y':letter = 25;break;
            case 'Z':letter = 26;break;

            default:
                break;
            }

            result +=  letter * multiples;

            multiples *= 26;
        }

        cout << result;
        return result;
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

int main()
{
    Solution s;
    s.titleToNumber("ZY");

    return 0;
}