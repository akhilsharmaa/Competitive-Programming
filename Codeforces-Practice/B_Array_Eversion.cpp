#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl          "\n";   
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)         v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

   int n;
   cin >> n;
   
   vector<int> v(n);
      
   for(int i=0; i < n; ++i){
      cin >> v[i];   
   }
   
   int x = v[n-1], cnt = 0;
   
   for (int i = n-2; i >= 0; --i){
      if(v[i] > x){
         cnt++;
         x = v[i];
      }
   }
   
   cout << cnt << endl; 
}


int main(){

  fastIO 
  
  int t;
  cin >> t; 
  
  for (int i = 0; i < t; ++i)
   solve();

  return 0;
}

