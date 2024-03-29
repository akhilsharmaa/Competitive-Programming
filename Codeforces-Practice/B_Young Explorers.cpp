/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl         "\n";  
#define printv(v)    for(auto&&i:v)cerr<<i<<' ';cerr<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)        v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

        
    int n; cin >> n;
    vector<int> v(n);
       
    for(int i=0; i < n; ++i){
       cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int ans = 0, cur = 0;
    for (int i = 0; i < n; i++) {
        if (++cur == v[i]) {
            ans++;
            cur = 0;
        }
    }
    
    cout << ans << endl;  
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

