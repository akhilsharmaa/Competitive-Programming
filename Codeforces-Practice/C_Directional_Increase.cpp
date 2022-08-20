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

   		
   int n; cin >> n;
   vector<ll> v(n+1), sn(n+1);
   
   sn[0] = 0;
      
   for(int i=1; i <= n; ++i){
      cin >> v[i];
      sn[i] = sn[i-1] + v[i];
   }
   

   if(sn[n] != 0){
   	cout << "NO\n";
   	return;
   }
   
   bool ok = true;
   for (int i = 1; i <= n; ++i){
   	 if(sn[i] < 0)ok = false;
   }
   
   bool visitedZero = 0;
   for (int i = 1; i <= n; ++i){
   	
   	if(sn[i] == 0) visitedZero = true;
   	else if (visitedZero){
   		ok = false;
   		break;
   	}
   }
   
   if (ok) cout << "YES\n";
   else cout << "NO\n";
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

