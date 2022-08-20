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
    unordered_map<int, int> mp;
       
    for(int i=0; i < n; ++i){
       int k;cin >> k;
       mp[k]++;	
    }
   
   	int sgl = 0;
   	int mx = 0;
   	
   	for(auto i : mp){
   		
   		sgl+= i.second >= 1;
   		mx = max(mx, i.second);
   	}
   	
   	int a1 = min(mx, sgl-1);
   	int a2 = min(mx-1, sgl);
   	
   	cout << max(a1, a2) << endl;

}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

