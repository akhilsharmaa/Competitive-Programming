/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define no           cout<<"NO"<<endl;
#define yes          cout<<"YES"<<endl;
#define loop(i,a,b)  for(int i=(a);i<=b;++i)
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){

	vector<ll> v;
	ll n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i){
		ll input=0; 
		cin >> input; 
		v.pb(input);
	}
 
	sort(v.begin(), v.end());

	if(v[0] == v[n-1]){
		cout << -1 << endl;
		return;
	}

	ll ans = 0;
	for (int i = 0; i < n; ++i){
		ans = __gcd(ans, v[i]- v[0]);
	}

	cout << ans << "\n";
}

int main(){

   // Faster I/O
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t = 1; 
   cin >> t;

   while(t--){
     solve();
   }

   return 0;
}





