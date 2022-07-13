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
     
    int n = 0; 
    cin >> n;
    vector<int> v(n);
    
    ll allXor = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        allXor ^= v[i]; 
    }


    for (int i = 0; i < n; i++){
        ll t = allXor ^ v[i];
        if(v[i] == t){
            cout << v[i] << endl;
            break;
        }
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

