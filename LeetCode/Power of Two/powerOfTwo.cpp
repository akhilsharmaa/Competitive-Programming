
/* Solved :) 
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Power of Two.
Memory Usage: 6 MB, less than 23.16% of C++ online submissions for Power of Two.

*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n < 1){
            return false;   
        }

        if (n == 1){
            return true;
        }

        if( n % 2 == 1){
            return false;   
        }

        return isPowerOfTwo(n /2);
    }
};