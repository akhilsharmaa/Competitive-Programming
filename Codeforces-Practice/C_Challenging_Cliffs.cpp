/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl         "\n";  
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)        v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

        
    int n; cin >> n;
    vector<int> v(n);
       
    for(int i=0; i < n; ++i){
       cin >> v[i];
    }
      
  
    sort(all(v));
    
    ll mn1 = INT_MAX, mn2 = INT_MAX;
    int d = INT_MAX, ind1 = 0, ind2 = 0;
    
    for (int i = 0; i < n-1; ++i){
      if(d > abs(v[i] - v[i+1])){
        mn1 = v[i], mn2 = v[i+1];
        d = abs(v[i] - v[i+1]);
        ind1 = i, ind2 = i+1;
      }
    }
    
    if(n == 2){
      cout << v[0] << ' ' << v[1] << endl;
      return;
    }
    
    for(int i = ind2; i < n; i++){
      cout << v[i] << ' ';
    }
    
    for(int i = 0; i <= ind1; i++){
      cout << v[i] << ' ';
    }
    
    cout << endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}
 