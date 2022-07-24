
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
#define loop(i, j)   for (ll i = 0; i <= j; ++i)
#define MOD 		 1e9 + 7


void solve(){
     
    int n , k;
    string str;
    cin>> n >> k >> str;
    
    
    int i= str.find_first_of('*');
    
    ll ans = 1;
    
    
    while(1){
    	
    	int j = min(n-1,i+k);
    	for (; j > i && str[j] == '.'; --j){}
    	
    	if(i == j)break;
    	
    	ans++;
    	i = j;
    		
    }
    
    
    cout << ans << endl;
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

