
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
    
    
    ll cnt= 0;
    for (int i = 0; i < n; ++i){
    	while(v[i] == 1){
    		i++;
    	}
    	
    	cnt++;
    }
     
    cout << cnt << endl; 
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

