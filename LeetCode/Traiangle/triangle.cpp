/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

// Runtime: 7 ms, faster than 75.81% of C++ online submissions for Triangle.
// Memory Usage: 8.6 MB, less than 70.76% of C++ online submissions for Triangle.

class Solution {
public:
    int minimumTotal(vector<vector<int> > & triangle) {
        	
        int n = triangle.size();
        vector<int> dp(triangle.back());

        for (int i = n-2; i >= 0; i--){

            for (int j = 0; j <= i; j++){
               dp[j] = min(dp[j], dp[j+1]+ triangle[i][j]);
            }
            
        }

        return dp[0];
    }
};

