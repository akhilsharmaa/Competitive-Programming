#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl	       "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n << " ";
#define all(v) 	     v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

    ll n, m, a, b;
    cin >> a >> b;
    
    ll ans = min(min(a, b),(a+b)/3);
    
   	cout << ans << endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

