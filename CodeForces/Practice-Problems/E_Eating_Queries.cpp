
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fast         cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
const ll MOD = 1e9 + 7;


void solve(){
     
    // Taking INPUT Array
	ll n = 0, k= 0; 
	cin >> n >> k;
	vector<int> v(n);
	  
	for (int i = 0; i < n; i++)
		cin >> v[i]; // input-values
	
	sort(v.begin(), v.end(), greater<int>());
	
	for (int i = 1; i < n; ++i)
		v[i] += v[i-1];
	
	while(k--){
		
		ll q;
		cin >> q;

		int le = 0, ri = n-1, ans = -1;;
		
		while(le <= ri){
			
			ll mid = (ri+le)/2;
			
			if(q <= v[mid]){
				ans = mid+1;
				ri = mid -1;
			}else {				
				le = mid +1;
			}
		}
		
		cout << ans << endl;
	}
}


int main(){
    
    fast // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

