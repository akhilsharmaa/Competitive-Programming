#include <iostream>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        

    if (c == 1 || c == 0){
        return true;
    }
    

    int b = c;
    for(int a = 1; a < c ; a++){
        int sq_a = a * a;


        for (int b = 1 ; b < c ; b++){
            int sq_b = b * b;

            if (sq_b + sq_a == c)
            {
                cout << "Founded "<<endl;
                return true;
                break;
            }
            
        }
        



    }
        return false;
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

// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.
int main(){
    Solution s ;
    cout << s.judgeSquareSum(100000);
    return 0;
}
