
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		 "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){
     
	
	int n; cin >> n;
	vector<ll> v(n);
	  
	for (int i=0; i<n; ++i)
		cin >> v[i];
	
	ll dp[n+1] = {0};
	
	for (int i = n-1; i >= 0; i--){
		
		if(v[i] > n-i) {
			dp[i] = v[i];
			continue;
		}
		
		dp[i] = v[i] + dp[i+v[i]];
	}
    
    ll ans = INT_MIN;
    for(auto i: dp){
    	ans = max(ans, i);
    }
    
    cout << ans<<endl;
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

