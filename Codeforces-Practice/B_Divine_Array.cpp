
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
    
    int n; cin >> n;
    vector<int> v(n);
      
    for (int i=0; i<n; ++i)
    	cin >> v[i];
    
    int dp[n+1][n] = {0};
    
    for (int j = 0; j < n; ++j){
    		dp[0][j] = v[j]; 
    }
   
    for (int i = 1; i <= n; ++i){
    	
    	map<int, int> mp;
    	for(int j = 0; j < n; j++){
    		mp[dp[i-1][j]]++;
    	}
    	
    	for (int j = 0; j < n; ++j){
    		v[j] =   mp[v[j]];
    		dp[i][j] = v[j]; 
    	}
    }
    
     
    // Query 
    int q; cin >> q;
    
    for (int i = 0; i < q; ++i){
    	int x, k;
    	cin>> x >> k;
    	
    	if(k <= n){
    		cout << dp[k][x-1] << endl;
    	}else {
    		cout << dp[n][x-1] << endl;
    	}
    }
     
   
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

