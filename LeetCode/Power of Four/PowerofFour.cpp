#include <bits/stdc++.h>
using namespace std;

/* 
Runtime: 6 ms, faster than 6.81% of C++ online submissions for Power of Four.
Memory Usage: 5.9 MB, less than 71.27% of C++ online submissions for Power of Four.
*/

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        switch (n) {
            case 1:
            case 4:
            case 16:
            case 64:
            case 256:
            case 1024:
            case 4096:
            case 16384:
            case 65536:
            case 262144:
            case 1048576:
            case 4194304:
            case 16777216:
            case 67108864:
            case 268435456:
            case 1073741824:
                return true;

            default:
                return false;
        }
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
    cout<< s.isPowerOfFour(16);

    return 0;
}