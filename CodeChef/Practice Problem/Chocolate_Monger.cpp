/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define MOD          100000009
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){
     
    // Taking INPUT Array
    ll n = 0, x = 0; 
    cin >> n >> x;
    vector<int> v(n);
     
    for (int i = 0; i < n; i++)
        cin >> v[i]; // input-values
    
    sort(v.begin(), v.end());

    ll k, cnt= 0;

    for (ll i = 0; i < n; i++){
        if(v[i] != k){
            cnt++;
        }
        k = v[i];
    }
    
    ll ans = min(n-x, cnt);
    cout << ans << endl;
}


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int t = 0;
   cin >> t ;
   while(t--){
       solve();
   }
   return 0;
}

