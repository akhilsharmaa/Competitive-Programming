/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

#include <bits/stdc++.h>
using namespace std;

#define ll           long long int
#define pNo          cout<<"NO"<<endl;
#define pYes         cout<<"YES"<<endl;
#define MOD          100000009
#define printv(v)    for(auto&&i:v)cout<<i<<' ';


void solve(){

    int n; cin >> n;
    vector<pair<string, string>> vt;
    map<string, int> mp;

    for (int i = 0; i < n; i++){
        string fN, lN;
        cin >>fN >>lN;
        vt.push_back({fN, lN});
        mp[fN]++;
    }
    
    for (int i = 0; i < n; i++){
        if(mp[vt[i].first] > 1){
            cout << vt[i].first << " " << vt[i].second << endl;
        }else 
            cout << vt[i].first  << endl;

    }
}


int main(){

   // Faster I/O
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int t = 0;
   cin >> t ;
   while(t--){
       solve();
   }
   return 0;
}

