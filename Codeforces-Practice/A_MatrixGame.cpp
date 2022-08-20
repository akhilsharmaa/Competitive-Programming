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
	
		int m, n;
		
		cin >> n >> m;
		set<int> r, c;
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				 
				int k; 
				cin >> k;
				if(k == 1) r.insert(i), c.insert(j);
			}
		}
		
		int mn = min(n-r.size(),m-c.size());
		cout <<( mn % 2?"Ashish":"Vivek")<< endl;
	
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

