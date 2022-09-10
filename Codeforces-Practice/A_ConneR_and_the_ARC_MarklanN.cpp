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

    int n, s, k;
    cin >> n >> s >> k;
    map<int, bool> mp;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        mp[x] = true;
    }
    
    int d1 = INT_MAX;
    for (int i = s; i <= n; i++) {
        if (!mp[i]) {
            d1 = i - s;
            break;
        }
    }
    
    int d2 = INT_MAX;
    for (int i = s; i >= 1; i--) {
        if (!mp[i]) {
            d2 = s - i;
            break;
        }
    }
    
    cout << min(d1, d2) << '\n';

}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

