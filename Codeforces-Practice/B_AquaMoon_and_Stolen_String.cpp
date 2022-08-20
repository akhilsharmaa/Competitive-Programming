#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){ 

   int n, m;
   cin >> n >> m;
   
   int vt[(2*n)-1][m];
   
   for (int i = 0; i < (2*n)-1; ++i){ 
    
	   	string str; cin >> str;
      
      for (int j = 0; j < str.size(); ++j){
          vt[i][j] = (int)str[j] - 97;
      }
   }
   
   int ans[m] = {0};
   
   for (int i = 0; i < m; ++i){
     for (int j = 0; j < (2*n)-1; ++j){
        ans[i] = vt[j][i] ^ ans[i];
     }
   }
   
   
  for (int i = 0; i < m; ++i){
    char covertedChar = (char)('a' + ans[i]);
    cout << covertedChar ; 
  }cout << endl;

}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

