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
     
    // Taking INPUT Array
    ll k;
    vector<int> v(10);

    for (int i = 0; i < 10; i++)
        cin >> v[i]; // input-values
        cin >> k;

    for (int i = 9; i >= 0; i--) {

        if(k==0)break;

        if(v[i] > k){
            v[i] -= k;
            k = 0;
        }else {
            k -= v[i];
            v[i] = 0;
        }
    }

    ll sm = 0;
    for (int i = 9; i >= 0; i--){
        if(v[i]){
            cout << i+1 << endl;
            return;
        }
    }

    cout << sm<< endl; 
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

