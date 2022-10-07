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




void solve(){ 

    int n;
    string str;
     
    cin >> n >> str;
    
    int zero = n; 
    for (int i = n-1; str[i] != '\0'; --i){
      if(str[i] == '0'){
        zero--;
      }else break;
    }
    
    cout << zero << endl;
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
  
  while(t--)
  {
    solve();
  }

  return 0;
}
