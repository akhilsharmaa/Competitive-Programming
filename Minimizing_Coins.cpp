/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push back
#define no           cout<<"NO"<<endl;
#define yes          cout<<"YES"<<endl;
#define MOD          1000000007;
#define loop(i,a,b)  for(int i=(a);i<=b;++i)
#define all(V)       (V).begin(),(V).end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(vt<int> v, ll k){
 
   int dp[2][k+1];
   memset(dp, 0, sizeof(dp));

   dp[0][0] = 1;

   ll n = v.size();
   
   for (ll i = 1; i <= k; i++){
      for (ll j = 0; j < n; j++){
         if(v[j]> i) continue;
            dp[0][i] = (dp[0][i] + dp[0][i - v[j]]) % MOD;
      }
   }

//    printv(dp);
   cout << dp[0][k];
}

int main(){

   // Faster I/O
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

     // Taking INPUT Array
     ll n = 0, k = 0; 
     cin >> n >> k;
     vector<int> v(n);
     
     for (int i = 0; i < n; i++)
     cin >> v[i]; // input-values

     solve(v, k);


   return 0;
}





