#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1360A - Minimal Square Accepted  

void solve(){
    
    ll a, b;
    cin >> a >> b;

    ll mini = min(a, b);
    ll maxi = max(a, b);

    ll ans = max(mini * 2, maxi);
    cout << ans * ans << "\n";

}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
   cin >> tCase;
   
   while(tCase--){
       solve();
   }

   return 0;
}

/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/

