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
     
    ll t, n, s;
    cin >> t >> n >> s;

    if(t*n <= s){
        ll d = n*n*t;
        cout << d << endl;
    }else 
    {
        if(s%n == 0){
            ll d = s/n;
            ll e = d*n*n;
            cout << e<< endl;
        }else {
            ll d = s/n;
            ll e = s%n;
            ll f = (d*(n*n)) + (e*e);
            cout << f << endl;
        }
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

