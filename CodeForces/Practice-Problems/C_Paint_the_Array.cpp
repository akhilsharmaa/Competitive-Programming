
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
#define MOD 		 1e9 + 7


void solve(){
     
    
    ll n; cin >> n;
    vector<ll> v(n);
      
    for (int i=0; i<n; ++i)
    	cin >> v[i];
    
    
    ll a = 0, b = 0;
    for (int i = 0; i < n; i+=2) a =  __gcd(v[i], a);	
    for (int i = 1; i < n; i+=2) b =  __gcd(v[i], b);	
    
    bool ok = true;
    for (int i = 0; i < n; i+=2){
    	if(v[i]% b == 0){
    		ok = false;
    		break;
    	}
    }
    
    if(ok){
    	cout << b << endl;
		return;
    }
    
    
	ok = true;
    for (int i = 1; i < n; i+=2){
    	if(v[i]% a == 0){
    		ok = false;
    		break;
    	}
    }
    
    	
    if(ok){
    	cout << a << endl;
    }else {
    	cout << 0 << endl;
    }
    
}


int main(){
    
    // fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

