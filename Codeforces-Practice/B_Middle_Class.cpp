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

			
	int n, x, ans = 0; 
	cin >> n >> x;
	vector<int> v(n);
	   
	for(int i=0; i < n; ++i){
	   cin >> v[i];
	}
	
	sort(v.begin(), v.end(), greater<int>());
	
	double sum = 0;
	
	for (int i = 0; i < n; ++i){
		sum += v[i];
		
		if(sum / (i+1) >= x){
			ans++;
		}else{
			break;
		}
	}

	cout << ans << endl;

}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

