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
     
    string str;
    cin >> str;
    int n = str.size();

    char xorr = 0;
    for( auto i: str){
        xorr ^= i;
    }

    if(xorr)
        cout << xorr << endl; 
    else cout << -1 << endl;
}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t;

    while(t--)
        solve();


    return 0;
}

