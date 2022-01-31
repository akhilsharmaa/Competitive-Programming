#include <bits/stdc++.h>
using namespace std;

/* 
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Bits.
Memory Usage: 5.8 MB, less than 81.40% of C++ online submissions for Reverse Bits.

*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t res, bit = 32;

        while(bit--){
            res = res << 1;
            if(n % 2 != 0) res += 1;

            n = n >> 1;
        }

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
    int n = 43261596;
    // 964176192
    cout <<  s.reverseBits(n);

    return 0;
}