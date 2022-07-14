/* ~ Akhilesh Sharma  */
#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fast cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
const ll MOD = 1e9 + 7;


void solve(){
     
    int n = 0; cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());
    cout << v[n-1];

    ll k = 0;
    for (int i = 0; i < n; i++){
        v[i] = v[i] ^ v[n-1];
        k = v[i] | k;
    }

    cout << " " << k << endl; 
}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t;

    while(t--)
        solve();


    return 0;
}

