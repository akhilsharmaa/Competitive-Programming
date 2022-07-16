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

// ACCEPTED :) 

void solve(){
    
   ll n = 0, m= 0; 
   cin >> n >> m;
   vector<int> v(n); 

   for (int i = 0; i < n; i++)
   cin >> v[i]; // input-values

    sort(all(v));
    
    ll chairCount = 0;
    for (int i = 1; i < n; i++){ 
        chairCount += max(v[i], v[i-1]) + 1;
    }

    chairCount += max(v[0], v[n-1]) + 1;
    
    if(chairCount <= m)pYes
    else pNo
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

