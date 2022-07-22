
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
	vector<int> v(n), ans;
	unordered_map<int, int> mp;
	  
	for (int i=0; i<n; ++i){
		cin >> v[i];
		mp[v[i]] = i+1;
	}
	
	for (int i = n; i > 0; i--){
		
		if(mp.find(i) == mp.end())
			continue;
			
		int l = mp[i]-1;
		while(l < v.size()){
			
			if(v[l] == -1)break;
			
			ans.pb(v[l]);
			mp.erase(v[l]);
			v[l] = -1;
			
			l++;
		}
		
	}
	
	printv(ans);
}


int main(){
    
    // fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

