/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Min Cost Climbing Stairs.
// Memory Usage: 13.7 MB, less than 79.79% of C++ online submissions for Min Cost Climbing Stairs.

class Solution {
public:    

    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int> dp(n+1);

        for (int i = 2; i <= n; i++){
            int jOne = dp[i-1] + cost[i-1];
            int jTwo = dp[i-2] + cost[i-2];

            dp[i] = min(jOne, jTwo);
        }
        
        return dp[n];
    }
};


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

    Solution s;

    int n = 0; cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    cin >> v[i]; // input-values
    
    cout << s.minCostClimbingStairs(v);

   return 0;
}

