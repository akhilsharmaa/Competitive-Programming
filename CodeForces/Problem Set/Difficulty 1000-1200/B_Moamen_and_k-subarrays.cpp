
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
     
     int n, k; 
     cin >> n >> k;
     vector<pair<int, int>> v(n);
       
     for (int i=0; i< n; ++i){
            cin >> v[i].first;
          	v[i].second = i;
     }
     
     sort(v.begin(), v.end());
     
     int cnt = 1;
     
     for (int i = 1; i < n; ++i)
     	if(v[i].second != v[i-1].second+1)
     		cnt++;
     
     cout << (cnt <= k ? "YES\n" : "NO\n");
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

