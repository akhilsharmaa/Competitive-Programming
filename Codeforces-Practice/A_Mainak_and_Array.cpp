/* Akhilesh Sharma C++ */

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

    		
    int n; cin >> n;
    vector<int> v(n);
    
       
    for(int i=0; i < n; ++i){
       cin >> v[i];
    }
    
	int ans = -1;
	ans = max(ans, v[n-1] - *min_element(all(v)));
	ans = max(ans, *max_element(all(v)) - v[0]);

	for(int i=0;i<n;i++){
		ans=max(ans,v[(i+n-1)%n]-v[i]);
	}
	
	cout << ans << endl;
    
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

