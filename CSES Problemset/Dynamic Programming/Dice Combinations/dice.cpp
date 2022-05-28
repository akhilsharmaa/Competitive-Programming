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


void solve(){

   ll n; cin >> n;
   vt<ll> dp(n+1, 0);

   dp[0] = 1;

   for (int i = 1; i <= n + 1; i++){
      for (int j = 1; j <= 6; j++){
         if(j>i)break;
         dp[i] = (dp[i] + dp[i-j]) % MOD;
      }
   }

   // printv(dp);
   cout << dp[n];
}

int main(){

   // Faster I/O
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);


     solve();


   return 0;
}





