#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl	       "\n";	
#define fi  first
#define se	second	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v) 	     v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){

    		
    int n; cin >> n;
    vector<int> v;
       
    for(int i=0; i < n; ++i){
       int inp; cin >> inp;
       
       v.pb(inp);
    }
    
    bool ok = false;

    for (int i = 0; i < n; ++i){
        
        for (int j = i+2; j < n; ++j)
        	if(v[i] == v[j]){
        		ok = true; 
        }
    }
    
    cout << (ok ? "YES" : "NO") << endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

