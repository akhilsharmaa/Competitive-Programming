#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl	       "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v) 	     v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

   		
   int n, k, pos =0, neg =0; 
   cin >> n >> k;
   vector<ll> v(n);
      
   for(int i=0; i < n; ++i){
      cin >> v[i];
      if(v[i] > 0)pos++;
      else neg++;
   }
   
   sort(all(v));
   
   ll sum = 0;
   
   for (int i = 0; i < n; i+= (k)){	
   		sum += 2 * (abs(v[i]) + 1);
   }
   
   cout << sum << endl;  
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

