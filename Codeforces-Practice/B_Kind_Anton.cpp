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
	vector<int> a(n), b(n);
	   
	for(int i=0; i < n; ++i)cin >> a[i];
	for(int i=0; i < n; ++i)cin >> b[i];
    
   	bool add =0, sub=0;
    bool ok = true;
    
    for (int i = 0; i < n; ++i){
    	
    	if(a[i] < b[i] && add == 0 ||
    		a[i] > b[i] && sub == 0){
    		ok = false;
    		break;
    	}
    	
    	if(a[i] == 1)add = true;
    	if(a[i] == -1)sub = true;
    	
    }
    
    cout << (ok ? "YES\n": "NO\n"); 
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

