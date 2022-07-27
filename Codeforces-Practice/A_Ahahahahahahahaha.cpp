
// c++ by Akhilesh Sharma

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		 "\n";	
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7


void solve(){
     
    
    int n; cin >> n;
    
    vector<int> v(n);
    vector<int>a(n), ans;
        int cnt0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (!a[i]) cnt0++;
        }
        int cnt1 = n - cnt0;
        if (cnt0 >= n / 2) {
            cout << cnt0 << '\n';
            for (int i = 0; i < cnt0; i++) cout << 0 << ' ';
        } else {
            cout << cnt1 - cnt1 % 2 << '\n';
            for (int i = 0; i < cnt1 - cnt1 % 2; i++) {
                cout << 1 << ' ';
            }
        }
        cout << '\n';
    
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}