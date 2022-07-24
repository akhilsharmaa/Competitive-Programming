
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
     
    int n, ok = 1;
    string str;
    cin >> n >> str;
    
    vector<int> t, m;
    
    for (int i = 0; i < n; ++i){
        if(str[i] == 'T') t.pb(i);
        else m.pb(i);
    }
    
    if(t.size() != (m.size()*2)){
        cout << "NO\n";
            return;
    }
    
    for (int i = 0; i < m.size(); ++i){
        if(m[i] < t[i] || m[i] > t[i+ m.size()]){
            cout << "NO\n";
            return;
        }   
    }
     
    cout << "YES\n"; 
}


int main(){
    
    fastIO // Fast-I/O 
    int t = 1;cin >> t; while(t--) solve();

    return 0;
}

