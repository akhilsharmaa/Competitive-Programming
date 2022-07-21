
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
     
    
    int n, d; 
    cin >> n>> d;
    
    while(n--){
    	
    	ll num=0;  
    	cin >> num;
    	
    	bool ok = false;


    	if(num >= d * 10){
    		ok = 1;
    	}
    		
    	if(!ok){
    		
    		int k = d;
	    	
	    	while(num >= d){
	    		
	    		if(num % d == 0){
	    			ok = true;
	    			break;
	    		}

	    		num -= 10;
	    	}
	    	
    	}
    		
    	cout << (ok == 1 ? "YES\n": "NO\n");
    	
    }	
}


int main(){
    
    // fastIO // Fast-I/O 
    
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

