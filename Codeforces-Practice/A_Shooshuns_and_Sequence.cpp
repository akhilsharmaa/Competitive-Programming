/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define pb           push_back
#define endl         "\n";  
#define scanVt(v,n)  for(int i=0;i<n;++i)cin >> v[i];
#define printVt(v)   for(auto&&i:v)cout<<i<<' ';cout<<"\n";
#define yN(ok)       cout << (ok? "YES": "NO") << endl;
#define debugln(n)   cerr <<#n<<":"<<n<<endl;
#define debug(n)     cerr <<#n<<":"<<n<<' ';

const ll MOD = 1e9 + 7;


void solve(){ 
  
    int n, k; 
    cin >> n >> k;
    
    vector<int> v(n);
       
    for(int i=0; i < n; ++i){
       cin >> v[i];
    }
    
    bool ok = true;

    for (int i = k-1; i < n-1; ++i){
      if(v[i] != v[i+1]){ok = false;}
    }
    
    for(int i = k-1; i >= 1; i--){
      if(v[i] != v[i-1]){break;}
      k-=1;
    }
    
    if(ok){
      cout << k -1 << endl;
    }else cout << -1 << endl;
  

}


int main(){
  
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
    
  #ifndef ONLINE_JUDGE
  freopen("inputf.in","r",stdin);
  freopen("outputf.in","w",stdout);
  freopen("errorf.in","w",stderr);
  #endif
  
  int t = 1;
  
  
  while(t--){
    solve();
  }

  return 0;
}
