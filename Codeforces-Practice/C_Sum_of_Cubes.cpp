
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		 "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
const ll N = 1'000'000'000'000L;

unordered_set<ll> st;

void precalc(){
	
	ll i = 1;
	while(pow(i, 3) <= N){
		st.insert(i*i*i);
		i++;
	}
}

void solve(){
     
    ll n;
    cin >> n;
    
    for (int i = 1; pow(i, 3) <= n; ++i){
    	
		if(st.count(n - pow(i, 3))){
			cout << "YES\n";
			return;
		}
    }
	
	cout << "NO\n";
     
}


int main(){
    
    fastIO // Fast-I/O 
    
    
    int t = 1;cin >> t;
    
     precalc();
     
    while(t--) solve();

    return 0;
}

