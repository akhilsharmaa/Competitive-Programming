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
     
    ll n;
    cin >>n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i]; // input-values
    for (int i = 0; i < n; i++) cin >> b[i]; // input-values


    
    sort(a.begin(), a.end());

    for (ll i = 0; i < n; i++){
        if(a[i] != b[i]){
            cout << "no" << endl;
            return;
        }
    }
    
     cout << "yes\n";
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

