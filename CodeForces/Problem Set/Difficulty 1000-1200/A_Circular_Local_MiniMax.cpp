
/* c++ by Akhilesh Sharma  */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fast         cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
const ll MOD = 1e9 + 7;


void solve(){
     
    
    int n; cin >> n;
    vector<int> v(n), res;
      
    for (int i=0; i<n; ++i)
       cin >> v[i];
    
    
    sort(v.begin(), v.end());
    
    int a = 0, b = n/2;
    
    while(a < n/2){
        res.pb(v[a]), res.pb(v[b]);
        a++, b++; 
    }
    
    if(n&1) res.pb(v.back());
    
   bool flag = true;
   for (int i = 1; i < n-1; ++i){ 
      if(res[i] < res[i+1] and res[i] < res[i-1] or res[i] > res[i+1] and res[i] > res[i-1] ){
      }else flag = false;
   }
    
   if(res[0] > res[n-1] and res[0] > res[n-1] or res[0] < res[n-1] and res[0] < res[n-1]) {
   }else flag = false;
    
    
   if(!flag)cout << "NO\n";
   else {
      cout << "YES\n";
      printv(res);
    }
    
}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t;

    while(t--)
        solve();


    return 0;
}

