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
     
    ll n, cnt =0;
    cin >> n;

    bitset<32> s(n);
    string str = s.to_string();

    bool flag = false;
    for(auto i: str){

        if(i == '1')flag = true;

        if(flag && i == '0'){
            cnt++;
        }
    }

    cout << cnt << endl;
     
}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t;

    while(t--)
        solve();


    return 0;
}

