#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){ 
	
	ll n, sum = 0; 
	cin >> n;
	
	vector<int> v(n);
	map<ll, ll> mp;
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
		sum += v[i], mp[v[i]]++;
	}
	
	if ((2 * sum) % n != 0) {
		cout << 0 << endl;
		return;
  }
	
	ll cnt = 0, k = (2*sum)/n; 
	
	for (int i = 0; i < n; ++i){
			
			int x = k - v[i];
			if(mp.count(x))cnt += mp[x];
			if(v[i] == x)cnt -= 1; 	
	}
	
	
	cout << cnt/2 << endl;
}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

