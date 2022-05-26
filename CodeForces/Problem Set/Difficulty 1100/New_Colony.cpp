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
#define all(V)       (V).begin(),(V).end()
#define printv(v)    for(auto&&i:v)cout<<i<<' ';

bool isSorted(vector <ll> v){

	ll n = v.size();

	for (int i = 0; i < n-1; i++){
		if(v[i] < v[i+1]){
			return false;
		}
	}

	return true;
}

void solve(){

	// Taking INPUT Array
	ll n = 0, k; 
	cin >> n >> k;
	vector<ll> v(n);
	  
	for (int i = 0; i < n; i++)
	cin >> v[i]; // input-values
		
	ll ans = -1;
	while(k){

		if(isSorted(v)){
			cout << -1 << endl;
			return;
		}

		int i = 0;
		for(;i < n-1;i++){
			if(v[i+1] > v[i]){
				v[i]++;
				ans = i+1;
				break;
			}
		}

		if(i == n){
			cout << -1 << endl;
			return;
		}

		k--;
	}

	// printv(v);
	cout <<"" << ans << "\n";
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






