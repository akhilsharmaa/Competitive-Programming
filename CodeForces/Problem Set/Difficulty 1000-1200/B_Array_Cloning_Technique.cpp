/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define loop(i,a,b)  for(int i=(a);i<=b;++i)
#define MOD          100000009
#define all(V)       (V).begin(),(V).end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){
    
   // Taking INPUT Array
   int n = 0; cin >> n;
   vector<int> v(n);
   map<int, int> mp;
   
   for (int i = 0; i < n; i++){
        cin >> v[i]; // input-values
        mp[v[i]]++;
   }

   int maxi = INT_MIN; 
   map <int, int> :: iterator it;
   for (auto &&it : mp){
      maxi = max(it.second , maxi);
   }
 
   
    int ans = 0;
    while (maxi < n) {
        int d = min(n - maxi, maxi);
        ans += 1 + d;
        maxi += d;
    }
    cout << ans << '\n';

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

