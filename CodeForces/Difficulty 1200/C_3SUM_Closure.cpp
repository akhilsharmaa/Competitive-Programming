
/* c++ by Akhilesh Sharma  */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fast         cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define loop(i, j)   for (int a=i;a<=j;++i)
const ll MOD = 1e9 + 7;


void solve(){
     
	
    // Taking INPUT Array
    int n = 0; 
    cin >> n;
    vector<int> pos, neg;
      
    for (int i = 0; i < n; i++){
        int inp;
        cin >> inp; 
        if(inp > 0)pos.pb(inp);
        else neg.pb(inp);
    }
     
      
     
    cout << "NO\n";
}


int main(){
    
    fast // Fast-I/O 

    int t = 0;
    cin >> t;

    while(t--)
        solve();


    return 0;
}

