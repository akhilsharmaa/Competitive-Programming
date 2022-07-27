
// c++ by Akhilesh Sharma

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
    vector<int> a(n);
      
    for (int i=0; i<n; ++i)
    	cin >> a[i];
    
    
    int mn =-1, mx = -1;
	for (int i = 0; i < n; ++i){
        if (a[i] == a[i - 1]) {
            if (mn == -1) {
                mn = i;
            }
            mx = i;
        }
    }
    if (mn == mx) {
        cout << 0 << '\n';
    } else {
        cout << max(1, mx - mn - 1) << '\n';
    }
}


int main(){
    
    fast // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

