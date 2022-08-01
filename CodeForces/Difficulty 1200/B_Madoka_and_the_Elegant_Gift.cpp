#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define pYes         cout << "YES\n"; 
#define pNo          cout << "NO\n"; 
#define all(v)       v.begin(), v.end() 
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){ 

   int n, m; 
   cin >> n >> m;
	vector<vector<int>> a(n, vector<int> (m));
   
    for (int i = 0; i < n; ++i) {
        string s;	
        cin >> s;
        
        for (int j = 0; j < m; ++j){
	        a[i][j] = s[j] - '0';
        }
   	}
    
    
   bool ok = true;
   
   for (int i = 0; i < n-1; ++i){
		for (int j = 0; j < m-1; ++j){
   			
   			int sum = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
   			if(sum == 3)ok = false;
   		}
   	}
   	
   
   if(ok)pYes
   	else pNo;
}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

