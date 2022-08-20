#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl 		     "\n";	
#define printvec(res)    for (int i = res.size()-1; i >= 0; i--){ cout << res[i] ;}cout << endl;
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define MOD 		 1e9 + 7
	
void solve(){ 

   ll a, s;
    cin >> a >> s;
    vector<int>b;
    
    while(s){
        int x = a % 10;
        int y = s % 10;
        if(x <= y) b.pb(y - x);
        else{
            s /= 10;
            y += 10 * (s % 10);
            if(x < y && y >= 10 && y <= 19) b.pb(y - x);
            else{
                cout << -1 << '\n';
                return;
            }
        }
        a /= 10;
        s /= 10;
    }
    
    if(a) cout << -1 << '\n';
    else{
        while (b.back() == 0) b.pop_back();
        for(int i = b.size() - 1; i >= 0; i--) cout << b[i];
        cout << '\n';
    }
}


int main(){

  fastIO // Fast-I/O 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

