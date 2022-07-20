
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
     
    ll n, m;
    cin >> n >> m;
    
    ll ans = 0;
    
    	
    	if(n % 2 == 0 && m % 2== 0)
    		ans = 0;
    	else if(n % 2 == 1 && m % 2 == 1){
    		ans = (n*m) - ((n-1)*(m-1));
    		
    	}else if(n % 2 == 0 && m % 2 != 0){
    		ans = (n*m) - (n*(m-1));
    		
    	}else	
    		ans = ((n*m)- ((n-1)*m));
    	
    	cout << ans << endl ;
    
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

