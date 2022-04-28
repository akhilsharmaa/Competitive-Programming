// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

// Dynamic Approach
class Solution{
    public:
    /* Function to count the number of ways in which 
        frog can reach the top. */
    long long countWays(int n){

        if(n == 0)return 1;
        if(n == 1|| n == 2) return n;

        ll dp[n+1];
        dp[0] = 1, dp[1] = 2, dp[2] =4;

        for (int i = 3; i <= n; i++){
            dp[i] = (dp[i-1] + dp[i-2] + dp[i-3] ) % MOD;
        }

        return dp[n-1];
    }
};


// { Driver Code Starts.
int main(){

    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends