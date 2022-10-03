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

            
    int n; cin >> n;
    vector<int> a(n);
       
    for(int i=0; i < n; ++i){
       cin >> a[i];
    }

    sort(all(a));
    printv(a);
 
    int idx = n/2;
    ll ans[n+1] = {0};
    
    if(n % 2 == 0){
        
        ll k = n - 1;        
        for (int i = 0; i < n/2; ++i){
            ans[k--] = a[n-1-i];
            ans[k--] = a[i];
        }
    }else {
        
        ll k = n - 1; 
        ans[0] = a[n/2];       
        for (int i = 0; i < n/2; ++i){
            ans[k--] = a[n-1-i];
            ans[k--] = a[i];
        }
        
    }

    for (int i = 0; i < n; ++i){
        cout << ans[i] << ' ';
    }cout << endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

