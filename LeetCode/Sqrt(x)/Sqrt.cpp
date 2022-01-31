#include <iostream>
using namespace std;

// ACCEPTED :) 
class Solution {
public:
    int mySqrt(int x) {
        
        long long y = 0; 
        while (y * y <= x){

            y++;
        }   

        return y-1;
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
    s.mySqrt(64);


   return 0;
}