
/* c++ by Akhilesh Sharma  */

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
     
    ll n, q;
    
    cin >> n >> q;
    map<ll, pair<ll, ll>> mp;
      
    for (int i=1; i<=n; ++i){
    	ll inp; cin >> inp;
    	if(!mp.count(inp)) mp[inp].first = i, mp[inp].second = i;
    	else  mp[inp].second = i;
    }
    
    
    for (int i = 0; i < q; ++i){
    	ll a, b;
    	cin>> a >> b;
    	
    	if(!mp.count(a) or !mp.count(b) or mp[a].first > mp[b].second)
    		cout << "NO\n";
    	else
    		cout << "YES\n";
    }
}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t;

    while(t--)
        solve();


    return 0;
}

