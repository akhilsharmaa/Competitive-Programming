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
     
    ll a, b, c;
    cin >> a >> b >> c;

    if(a >= 10 && b >= 10 && c >= 10){
        if (a + b + c >= 100)
            cout << "PASS\n";
        else 
            cout << "FAIL\n";
    }else {
        cout << "FAIL\n";
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

