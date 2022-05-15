/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vt vector
#define pb push back
#define MOD 1000000007
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define speed cin.tie(NULL); ios_base::sync_with_stdio(false);
#define all(V) (V).begin(),(V).end()
#define printv(v) for(auto&&i:v)cout<<i<<' ';

int dp[1000001];

int main(){
 
   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);


   int t = 1;

   while(t--){

   		ll n= 0;
   		cin >> n;

   		vector<ll> dp(n+1, 0);
   		dp[0] = 1;
   		for (ll i = 1; i <= n; ++i){
   			for (ll j = 1; j <= 6; ++j){
   				if(j > i)break;	
   				dp[i] = (dp[i] + dp[i-j]) % MOD;
   			}
   		} 
   		cout << dp[n] << endl;

   } 

   return 0;
}

