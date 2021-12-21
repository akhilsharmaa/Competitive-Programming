#include <bits/stdc++.h>
using namespace std;

/*
Runtime: 20 ms, faster than 39.18% of C++ online submissions for Power of Three.
Memory Usage: 5.9 MB, less than 25.91% of C++ online submissions for Power of Three.  */

class Solution {
public:

    bool isPowerOfThree(int n) {
        
        while (n >= 3){
            if(n % 3 != 0) return false;
            n = n / 3;
        }
        return n == 1; 
    }
};

int main(){
    
    Solution s;
    cout<<  s.isPowerOfThree(81);

    return 0;
}