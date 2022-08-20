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
       int k; cin >> k;
       v[i] = abs(k);
    }
    
    for (int i = 1; i <= n; ++i){
    	
    	if(i % 2 == 0 && v[i-1] != 0 ){
    		cout << '-';
    	}
    	
    	cout << v[i-1] << ' ';
    }
    cout << 
    endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

