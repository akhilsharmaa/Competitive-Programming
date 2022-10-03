/* Akhilesh Sharma C++ */

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define vt           vector
#define pb           push_back
#define endl           "\n";    
#define printv(v)    for(auto&&i:v)cout<<i<<' ';cout<<endl;
#define fastIO       cin.tie(NULL);ios_base::sync_with_stdio(false);
#define debug(n)     cerr <<#n<<" = "<<n<<endl;
#define all(v)          v.begin(), v.end()
#define MOD          1e9 + 7


void solve(){ 

    int n; cin >> n;
    string str;cin >> str;
    
    string ans1 = "1", ans2= "1";
    for (int i = 1; i < n; ++i)ans1 += '0', ans2 += '0';
    
    
    bool one = false;
    for (int i = 1; i < n; ++i){
        
        if(str[i] == '1' && !one){
            one = true;
            ans1[i] = '1';
            continue;
        }
        
        if(one == true){
            ans2[i] = str[i];
            continue;
        }
        
        switch(str[i]){
            case '1': 
                ans1[i] = '1';
                break;
            case '2': 
                ans1[i] = '1';
                ans2[i] = '1';
        }
    }
    

    cout << ans1 << "\n" << ans2 << endl;
}


int main(){

  fastIO 
  int t = 1;cin >> t; while(t--) solve();

  return 0;
}

