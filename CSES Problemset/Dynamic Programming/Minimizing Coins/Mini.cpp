/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl           "\n";    
#define printv(v)    for(auto&&i:v)cerr<<i<<' ';cerr<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)          v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 
            
    int n, k; 
    cin >> n >> k;
    vector<int> v(n),  dp(k+1, 1e9);
    
    for(int i=0; i < n; ++i){
       cin >> v[i];
    }
    
    dp[0] = 0;
    
    for (int i = 1; i <= k; ++i){
        for (int j = 0; j < n; ++j){
            if(i - v[j] >= 0){
                dp[i] = min(dp[i], dp[i-v[j]]+1);
            }
        }

    }
    
    cout << (dp[k] == 1e9 ? -1 : dp[k]) << endl;
        // printv(dp);
}


int main(){

  fastIO 
  solve();

  return 0;
}

