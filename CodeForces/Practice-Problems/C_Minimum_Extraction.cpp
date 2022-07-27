/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define loop(i,a,b)  for(int i=(a);i<=b;++i)
#define MOD          100000009
#define all(V)       (V).begin(),(V).end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';
#define debug(v)   cout << #v << " " << v ; 


void solve(){
    
   // Taking INPUT Array
   ll n = 0; cin >> n;
   vector<ll> v(n);
   for (ll i = 0; i < n; i++)cin >> v[i];
   
    sort(v.begin(), v.end());
    ll ans = v[0];

   for (ll i = 0; i < n-1; i++)
        ans = max(ans, v[i+1]- v[i]);

   cout << ans << endl;
}


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int t = 0;
   cin >> t ;
   while(t--){
       solve();
   }
   return 0;
}

