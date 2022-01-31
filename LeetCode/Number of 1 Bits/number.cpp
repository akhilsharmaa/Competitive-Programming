#include <bits/stdc++.h>
using namespace std;

/* 
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of 1 Bits.
Memory Usage: 6 MB, less than 47.28% of C++ online submissions for Number of 1 Bits.

*/

class Solution {
public:
    int hammingWeight(int n) {
        int total = 0;

        for (int i = 0; i < 32; i++){
            if(n % 2 != 0) total++;
            n = n >> 1;
        }

        return total;
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
    
    Solution s ;
    cout <<  s.hammingWeight(16);

    return 0;
}