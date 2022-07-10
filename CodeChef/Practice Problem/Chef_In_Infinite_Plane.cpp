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
     
    int n = 0; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    
    for (int i = 0; i < n; i++){
        cin >> v[i]; 
        mp[v[i]]++;
    }
    
    sort(v.begin(), v.end());

    ll cnt = 0;
    map <int, int> :: iterator it;
    for (auto && it : mp){
        if(it.first <= it.second){
            cnt += it.first-1;
        }else {
            cnt += it.second;
        }
    }

    cout << cnt << endl;
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

