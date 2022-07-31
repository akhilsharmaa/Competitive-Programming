

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7 


void solve(){ 

	ll a, b, x, y, n, ans = 1e18 + 7;
  cin >> a >> b >> x >> y >> n;

  ll da = a-x;
  ll db = b-y;

  if(da >= n){
    ans = min(ans, (a-n) * b);
  }

  if(db >= n){
    ans = min(ans, (b-n) * a);
  }


  if(da <= n){
    ll _a = a - da , _b = b;
    ll _n = n - da;

    if(_n > db){
      _b = y;
    }else {
      _b -= _n;
    }
      

    ans = min(ans, _a * _b);
  }

  if(db <= n){
      ll _b = b- db, _a = a;
      ll _n = n- db;

      if(_n > da){
        _a = x;
      }else {
        _a -= _n;
      }
      
      ans = min(ans, _a*_b);
    }

  cout << ans <<endl;

}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

