/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl         "\n";  
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debugln(n)   cerr <<#n<<":"<<n<<endl;
#define debug(n)     cerr <<#n<<":"<<n<<' ';
#define all(v)        v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

    ll n, k; cin >> n >> k; 
    string str; cin >> str;
    
    set<char> s;
       
    for(int i=0; i < k; ++i){
       char c; cin >> c;
       s.insert(c);
    }
    
    ll x = 0, ans = 0;

    for (ll i = 0; i < n; ++i){
      
      if(s.find(str[i]) == s.end()){
        ans += (x*(x+1))/2;
        x = -1;
      }
      
      x++;
    }
      
    ans += (x*(x+1))/2;
    
    // cerr << "\n" << endl;
    cout << ans << endl;

}


int main(){
  
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
    
  #ifndef ONLINE_JUDGE
  freopen("inputf.in","r",stdin);
  freopen("outputf.in","w",stdout);
  freopen("errorf.in","w",stderr);
  #endif
  
  int t = 1;
  // cin >> t;
  
  while(t--){
    solve();
  }

  return 0;
}
