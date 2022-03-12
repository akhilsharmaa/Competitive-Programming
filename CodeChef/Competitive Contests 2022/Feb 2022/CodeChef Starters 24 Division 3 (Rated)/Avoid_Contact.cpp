#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;



void solve(){
    
   ll x, y;
   cin >> x >> y;


   if( y == 0){
       cout << x << "\n";
       return;
   }

   
    ll answer = (y * 2);

    if(x - y != 0){
        answer += x - y;
    }else if(x == y){
        answer--;
    }

    cout << answer << "\n";
    
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

