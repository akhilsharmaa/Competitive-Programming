#include <bits/stdc++.h>
using namespace std;
/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for K-th Symbol in Grammar.
Memory Usage: 6 MB, less than 39.48% of C++ online submissions for K-th Symbol in Grammar.
*/

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1 && k == 1){
            return 0;
        }

        int mid = pow(2, n-1)/2;

        if(k <= mid){
            return kthGrammar(n-1, k);
        }else{
            return !kthGrammar(n-1, k-mid);
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
    

    return 0;
}