/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl         "\n";  
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)        v.begin(), v.end()
#define MOD          1e9 + 7


int main(){

  fastIO 
  
    ll n; cin >> n;
    vector<ll> v(n+1), s1(n+1), s2(n+1);
      
    for(ll i=1; i <= n; ++i) cin >> v[i];
    s1[1] = v[1], s2[1] = v[1];
    
    for(ll i=1; i <= n; ++i) s1[i] = s1[i-1] + v[i];
      
    sort(v.begin(), v.end());
    for(ll i=1; i <= n; ++i) s2[i] = s2[i-1] + v[i];
    
    ll q; cin >> q;
    
    while(q--){
        ll q, l, r;
        cin >> q >> l >> r;
        
        if(q == 1){
            cout << s1[r] - s1[l-1] << endl; 
        }else {
            cout << s2[r] - s2[l-1] << endl; 
        }
        
    }
    return 0;
}

