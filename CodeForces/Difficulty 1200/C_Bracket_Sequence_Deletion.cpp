#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define all(v)       v.begin(), v.end() 
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7

void solve(){ 
    
    int n;
    string s;
    cin >> n >> s;
    int l = 0;
    int cnt = 0;
    while (l + 1 < n) {
        if (s[l] == '(' || (s[l] == ')' && 
            s[l+1] == ')')) {
            l += 2;
        }else{
              int r = l + 1;
              while (r < n && s[r] != ')') {
                  ++r;
              }
              
              if (r == n)break;
              l = r + 1;
        }
        ++cnt;
    }
    
    cout << cnt << ' ' << n - l << '\n';
}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}
