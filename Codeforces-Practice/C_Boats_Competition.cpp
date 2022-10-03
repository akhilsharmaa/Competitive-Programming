/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl           "\n";    
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)          v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 
            
    int n; cin >> n;
    map<int, int> mp, ans;
    vector<int> v(n);
       
    for(int i=0; i < n; ++i){
       cin >> v[i];
       mp[v[i]]++;
    }
    
    int k = (n*2)+1;
    while(k--){
        
        for (int i = 0; i < n; ++i){
            
            if(mp[v[i]] <= 0)continue;
            
            mp[v[i]]--;
            
            if(mp[k -v[i]] > 0){    
                mp[k -v[i]]--;
                ans[k]++;
            }
        }
        
        for(int i=0; i < n; ++i)
            mp[v[i]]++;
    
    }
    
    int mx = 0;
    for(auto i: ans)
        mx = max(i.second, mx);
    
    cout << mx << endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

