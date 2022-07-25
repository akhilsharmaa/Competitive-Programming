
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
#define pYes		 cout<<"YES\\n";	
#define pNo 		 cout<<"NO\n";	
#define MOD 		 1e9 + 7


void solve(){
     
     
     
     int n; cin >> n;
     map<string, bool> mp;
     vector<string> v;
       
     for (int i=0; i<n; ++i){
          	string inp; cin >> inp;
          	mp[inp] = true;
          	v.push_back(inp);
     }
     
     
     for (int i = 0; i < n; ++i){
     	
     	bool ok = false;
     	
     	for(int j = 1; j < v[i].size(); j++){
     		
     		string preff = v[i].substr(0, j);
     		string suff = v[i].substr(j, v[i].size()-1);
     		
     		if(mp[preff] && mp[suff]){
     			ok = true;
     			break;
     		}
     	}
     	
     	cout << ok;
     }
    
	cout << endl;
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

