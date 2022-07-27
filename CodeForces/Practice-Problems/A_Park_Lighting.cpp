#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

// 1358A - Park Lighting ACCEPTED  😀

void solve(){
   
   ll a, b; cin >> a >> b;
    ll res = a * b; 

    if(res % 2 != 0){
        res++;
    }

    res /= 2;

   cout << res << "\n";
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
   AUTHOR- AKHILESH
   ID - @akhilsharmaa
*/

