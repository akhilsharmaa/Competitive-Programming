

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define printv(v)    for(auto&&i:v)cerr<<i<<' ';cerr<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){ 

   
   int n, ok = 1; cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; ++i)
   		cin >> a[i];
   
   vector<int> b = a;
   sort(b.begin(), b.end());

   for (int j = n%2; j < n; j+= 2){
   		 if (!(a[j] == b[j] && a[j + 1] == b[j + 1] || 
   		 		a[j] == b[j + 1] && a[j + 1] == b[j])){
   		 	ok = false;
   		 }
   }

   cout << ( ok==1 ? "YES\n": "NO\n");
}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

