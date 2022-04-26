#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

// ACCEPTED SOLUTION 
class Solution{
public:
    int nCr(int n, int r){
        
        if(r > n)return 0;

        unsigned dp[n+1][r+1];
        dp[1][0] = 1, dp[1][1] = 1;
        
        for(int j = 1; j<=n; j++)
           dp[j][1] = j;

        for(int i = 2; i<=n; i++){
            for(int j = 2; j<=r && j<=i; j++){
                if(i == j)
                    dp[i][j] = 1;
                else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%MOD;
            }
        }

        return dp[n][r];
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;
    }

    return 0;
} // } Driver Code Ends