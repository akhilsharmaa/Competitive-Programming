// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

// Recursive Approach
class Solution{
    public:
    /* Function to count the number of ways in which 
        frog can reach the top. */

    int cnt = 0;

    void helper(int n){

        if(n == 0)cnt++;
        if(n < 0)return;

        helper(n-1);
        helper(n-2);
        helper(n-3);
    }

    long long countWays(int n){
        helper(n);
        return cnt;
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