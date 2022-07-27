
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		 "\n";	
#define pYes 		 cout<<"YES\n";	
#define pNo 		 cout<<"NO\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){
     
    int n; cin >> n;
    vector<int> v(n);
      
    for (int i=0; i<n; ++i) cin >> v[i];
    
    bool ok = false, all = true;
    for (int i = 1; i < n; ++i){
    	if(v[i] <= v[i-1])ok= true;
    	if (v[i] != v[i-1])all = false;
    }
    
    cout << (ok or all or n%2==0? "YES\n": "NO\n");	
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

