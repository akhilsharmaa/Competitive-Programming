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
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<< endl; 


void solve(){
    
   // Taking INPUT Array
   ll n = 0, cnt =0; 
   cin >> n;
   vector<ll> v;

   for (int i = 0; i <= n-1; i++) {
        ll p = 0;cin >> p; 
        v.pb(p);
   }
   
   while(v.size()>0 && v[0]==0)v.erase(v.begin());
   while(v.size()>0 && v[v.size()-1]==0)v.pop_back();
   
   for (int i = 0; i < v.size(); i++){
      if(v[i] == 0){
         cnt++;
      }
   }
   
   if(v.size()== 0){ cnt = 0;
   }else if(cnt != 0) cnt = 2;
   else cnt = 1;

   cout << cnt << endl;
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

