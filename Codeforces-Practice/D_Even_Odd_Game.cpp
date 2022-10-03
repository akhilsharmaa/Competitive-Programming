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
       
    for(int i=0; i < n; ++i)
        cin >> v[i];
    
    sort(v.rbegin(), v.rend());
    
    ll ans = 0;
    
    for (int i = 0; i < n; ++i){
      if(i % 2 == 0){
        if(v[i] % 2 == 0){
          ans += v[i];
        }
      }else {
        if(v[i] % 2 == 1){
          ans -= v[i];
        }
      }
    }
    
    // cout << ans << endl;
    if(ans == 0)cout << "Tie\n";
    else if(ans > 0)cout << "Alice\n";
    else cout << "Bob\n";
    
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

