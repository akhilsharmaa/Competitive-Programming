#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define fi           first   
#define se           second   
#define endl	       "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<' ';
#define all(v) 	     v.begin(), v.end()
#define MOD          1e9 + 7


void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int a = 0, b = 0;
    for (int &e : v) {
        cin >> e;
        e % 2 == 0? a++:b++;
    }
    
    if (a % 2 != b % 2) {
        cout << "NO\n";
    } else {
        if (a % 2 == 0) {
            cout << "YES\n";
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
            cout << "NO\n";
        }
    }
}

int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

