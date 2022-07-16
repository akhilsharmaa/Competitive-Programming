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
    
   ll x, y, p1, p2;
   cin >> x >> y;

   ll d = x + y;
   

    if(d % 2 != 0) cout << "-1 -1\n";    
    else{
        p1 = x/2, p2 = y/2;

        if(x&1){
            p1++;
        }

        cout << p1 << " " << p2 << "\n";
   }
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
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

