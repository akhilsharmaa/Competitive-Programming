#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl	       "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v) 	     v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

			
	ll n, cnt =0; 
	cin >> n;
		
	map<int, int> mp;	
		
	for(int i=0; i < n; ++i){
	   ll k;
	   cin >> k;
	   mp[k-(i+1)]++; 
	}
			
	ll ans =0;
	
	for(auto i: mp){
		ll z = i.second;
		ans += (z*(z-1))/2;
	}	
	
	cout << ans << endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

