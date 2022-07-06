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
#define all(v)       v.begin(),v.end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){
     
   // Taking INPUT Array
   int n = 0; cin >> n;
   unordered_map<int, int> mp;
   vector<int> v(n);
   
   for (int i = 0; i < n; i++){
      cin >> v[i]; // input-values
      mp[v[i]]++;
   }

   int maxi = INT_MIN, cnt =0;
   for(auto i : mp){
      maxi=  max(i.second, maxi);
      cnt++;
   }

   if(mp.size()==1) cout<<"0"<<endl;
   else if(maxi==1) cout<<((n==1)?1:n-2)<<endl;
   else cout<<n-maxi<<endl;
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

