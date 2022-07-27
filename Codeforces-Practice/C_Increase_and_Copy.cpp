
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
     
    ll n;cin >> n;
    
    ll k = 1, cnt = 0, m = 1;
    
    while(k <= n){
    	
    	k += m;
    	cnt++;
    	
    	if(k > n)break;
    	
    	k += m++;
    	cnt++;
    }
    
    cout << cnt-1 << endl;
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

