
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

bool isPossible(ll nor, ll pri, ll n, ll r, ll i){
	return (nor * i) + (pri * (n-i)) <= r;
}			

void solve(){
     
    ll x, y, n, r;
    cin >> x >> y >> n >> r;
    
    if((r/y) >= n){
    	cout << 0<<' ' << n << endl;
    }else if(r/x < n){
    	cout << -1 << endl;
    }else {
    	int a = (r-(y*n))/ (x-y);
    	if((r-(y*n)) % (x-y) != 0)a++;
    	
    	cout << a << ' ' << n-a << endl;	
    }
	
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

