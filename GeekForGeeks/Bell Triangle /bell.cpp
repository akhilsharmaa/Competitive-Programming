/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// SUBMIT ACCEPTED :) 
class Solution{
public:
    int bellNumber(int n){

        int dp[n+1][n+1];
        dp[0][0] = 1;

        for (int i = 1; i <= n ; i++){
            dp[i][0] = dp[i-1][i-1];
            for (int j = 1; j <= n; j++){
                dp[i][j] = (dp[i -1][j-1] + dp[i][j-1])
                    % 1000000007;
            } 
        }
        
        return dp[n][0];
    }
};

int main(){

   cin.tie(NULL);
   ios_base::sync_with_stdio(false);
   
   Solution s;
   int input;cin >> input;
   cout << s.bellNumber(input);

   return 0;
}

