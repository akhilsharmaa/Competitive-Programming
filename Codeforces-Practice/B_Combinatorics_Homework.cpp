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

    		
    vector<int> v(4);
       
    for(int i=0; i < 4; ++i){
       cin >> v[i];
    }
    
    ll mx = (v[0]+v[1]+v[2])- 3;
    ll mn = v[2]-v[1]-v[0] - 1;
     
    if(v[3] >= mn && v[3] <= mx){
    	cout << "YES\n";
    }else cout << "NO\n";

}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

	