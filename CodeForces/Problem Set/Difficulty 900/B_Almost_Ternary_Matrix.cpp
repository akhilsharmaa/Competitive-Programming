
/* c++ by Akhilesh Sharma  */

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
     
    ll n,m;
    cin>>n>>m
    
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
        	
        	cout<<((i%4<=1)==(j%4<=1))<<" ";
        	
        }cout << "\n";
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

