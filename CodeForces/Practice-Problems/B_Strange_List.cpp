
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
#define se 		 	 second
#define fi 		 	 first


void solve(){
     
    
    ll n, x, sum=0, id = 1, mini = INT_MAX; 
    cin >> n >> x;
    vector<pair<int, int>> v(n);
      
    for (int i=0; i<n; ++i){
    	cin >> v[i].fi;
    	v[i].se = 1;
    }
    
      
    for (int i=0; i< v.size(); ++i){
    	if(v[i].first % x == 0){
    		v.pb({ v[i].fi/x,  x*v[i].se});
    	}else break;
    }
    

	for (int i = 0; i < v.size(); ++i){
		sum += (v[i].fi * v[i].se);
	}
     
    cout << sum << endl; 
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

