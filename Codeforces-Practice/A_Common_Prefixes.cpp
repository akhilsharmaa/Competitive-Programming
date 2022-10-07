/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define pb           push_back
#define endl         "\n";  
#define scanVt(v,n)  for(int i=0;i<n;++i)cin >> v[i];
#define printVt(v)   for(auto&&i:v)cout<<i<<' ';cout<<"\n";
#define debugln(n)   cerr <<#n<<":"<<n<<endl;
#define debug(n)     cerr <<#n<<":"<<n<<' ';

const ll MOD = 998244353 ;

char inv(char a){
    if ( a== 'x')return 'y';
    if ( a== 'y')return 'x'; 
}

void solve(){ 
  
    int n; cin >> n;
    vector<int> v(n);
       
    for(int i=0; i < n; ++i){
       cin >> v[i];
    }
    
    int mx = *max_element(v.begin(), v.end()) + 1;
    
    string str = "";
    for (int i = 0; i <= mx; ++i)str += 'x';
        
    cout << str << endl;
    
    
    for (int i = 0; i < n; ++i){
        
        int j = 0;
        for (j; j < v[i]; ++j){
          cout << str[j];
        }
        
        for (j; j < mx; ++j){
          cout << inv(str[j]);
          str[j] = inv(str[j]);
        }
        
        cout << (str[j-1]) << endl;
    } 
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
  cin >> t;
  
  while(t--){
    solve();
  }

  return 0;
}
