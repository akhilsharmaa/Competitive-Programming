
/* c++ by Akhilesh Sharma  */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define printv(v)    for(auto&&i:v)cerr<<i<<' ';cerr<<endl;
#define fast         cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
const ll MOD = 1e9 + 7;


void solve(){
     
	
	// Taking INPUT Array
	ll n = 0; 
	cin >> n;
	vector<ll> a(n);
	
	map<ll, ll> mp;  
	  
	ll mx =-1;
        
        for(int i =0; i<n; i++){
            cin>>a[i];
        }
        ll ans = 999999999;
        ll k = 0;
        
        for(int i =0; i<n; i++){
             mp[a[i]]++;
             
             while(mp[a[i]]>1){
                 mp[a[k]]--;
                 k++;
             }
             
            ans = min(ans, (2*(min(k, n-i-1)) + max(k, n-i-1)));
        }
        
        cout<<ans<<endl;

}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t;

    while(t--)
        solve();


    return 0;
}

