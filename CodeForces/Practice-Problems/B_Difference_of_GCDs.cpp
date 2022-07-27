
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		 "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';;cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){
     
    
	ll n, l, r, flag = 1;
	cin >> n >> l >> r;
	
    // First term after the l 
    
   	vector<ll> v;
    
    for (int i = 1; i <= n; ++i){
    	
		ll a_i = (((l-1)/i)+1)*i;
		
		if(l <= a_i && a_i <= r)
			v.push_back(a_i);
		else{
			flag = false;
			break;
		}
	
		
    }
    
    
    if(flag){
    	cout << "YES\n";
    	printv(v);
    }else {
    	cout << "NO\n";
    }
    
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

