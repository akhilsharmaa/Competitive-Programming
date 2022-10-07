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

const string upAlpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string lowAlpha = "abcdefghijklmnopqrstuvwxyz";
const ll MOD = 1e9 + 7;

ll ans1(vector<int> v){

    ll sum = 0, n = v.size();
    int piv = (n/2)-1;

    for (int i = 0; i < n; ++i){
      sum += abs(v[piv] - v[i]);
    }
    
    debug(piv);
    
    return sum;
}

ll ans2(vector<int> v){
  
    ll sum = 0, n = v.size();
    int piv = (n/2);

    for (int i = 0; i < n; ++i){
      sum += abs(v[piv] - v[i]);
    }
    
    debug(piv);
    
    return sum;
}

void solve(){ 
        
    int n, m, d; 
    cin >> n >> m >> d;
    
    n *= m;
    vector<int> v(n);
       
    for(int i=0; i < n; ++i){
       cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int k = v[n-1] % d;
    debugln(k);
    bool ok= true;
    for (int i = 0; i < n; ++i){
      if(v[i] % d != k){
        ok = false;
      }
    }
    
    if(!ok){cout << -1<< endl; return;}
    
    int a1 = ans1(v)/d;
    int a2 = ans2(v)/d;
    
    cout << min(a1, a2);
    // cerr << endl;
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
  
  while(t--)
  {
    solve();
  }

  return 0;
}
