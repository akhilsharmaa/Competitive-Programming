
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
     
    
    int n, k; 
    cin >> n >> k;
    map<int, int> mp;
    vector<int> v(n);
      
    for (int i=0; i<n; ++i){
    	cin >> v[i];
    	mp[v[i]] = 1;
    }
    
    bool flag = false;
    
    for (int i = 0; i < n; ++i){
    	if (mp[v[i] + k] == 1){
    		flag = true;
    	}
    }
    
    
    if(flag) cout << "YES\n"; 
    else  cout << "NO\n"; 
}


int main(){
    
    fast // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

