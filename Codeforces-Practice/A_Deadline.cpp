/* Akhilesh Sharma C++ */

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

    int n, d;
    cin >> n >> d;

	int x, MAG = (int)sqrt(d) + 10;
	for(x = 0; x < MAG; x++) {
		if(x + (d + x) / (x + 1) <= n)
			break;
	}
	
	cout << (x < MAG ? "YES" : "NO") << endl;

}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

