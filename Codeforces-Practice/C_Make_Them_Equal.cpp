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
  
  
   ll n, odds = 0, p; 
   char c;
   string str;
   cin >> n >> c >> str;
    
   for (int i = 0; i < n; ++i){
      if(str[i] != c){
        odds++, p = i;
      }
    } 
    
    if(odds == 0){
      cout << odds << endl;
    }else if(odds == 1){
      cout << "1\n" << p + 2<< endl;
    }else {
      
      cout << "2\n" << n << ' '<< n-1 << endl;  
    }

}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

