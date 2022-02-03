#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// Accepted

void solve(){
    
   ll friends, bottle, ml, c_limes, d_slicesOfLime, found_P_salt, needed_ml, needed_salt;

   cin >> friends >> bottle >>  ml >> c_limes >> d_slicesOfLime 
        >> found_P_salt >> needed_ml >> needed_salt; 
    
    ll limes = (c_limes * d_slicesOfLime);
    ll salt = found_P_salt / needed_salt;
    ll drink = (bottle * ml) / needed_ml;

    ll ans = min( limes, min(salt, drink))/friends;
    cout << ans << "\n";
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

   int tCase;
       solve();

   return 0;
}

/* 
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

