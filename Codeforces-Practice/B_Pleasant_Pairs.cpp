#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define a           vector
#define pb           push_back
#define endl 		     "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){ 
	
	vector<int> a;
	int n; cin >> n;
	a.pb(0);
	for (int i = 0; i < n; ++i){
		int k; cin >> k; 
		a.pb(k);
	}
	
		
	int cnt = 0;
	
	for (int i = 1; i <= n; ++i){

		for (int j = a[i]-i; j <= n; j += a[i]){
			if(j >= 0 && a[i]*a[j] == i+j && i < j)
				cnt++;
		}
		
	}
	
	cout << cnt << endl;
	
}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

