#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;



void solve(){
    
   string t;
   string a, b, c, d, e;

   cin >> t;
   cin >> a >> b >> c >> d >> e;

   if(t[0] == a[0] || 
      t[0] == b[0] || 
      t[0] == c[0] ||
      t[0] == d[0] ||
      t[0] == e[0] ||
      
      t[1] == a[1] || 
      t[1] == b[1] || 
      t[1] == c[1] ||
      t[1] == d[1] ||
      t[1] == e[1] ){
          pYes
    }else pNo
    
}


int main(){

 // For Faster Output
   ios_base:: sync_with_stdio(false);
   cin.tie(NULL);

       solve();
   

   return 0;
}

/* 
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​
   ID - @akhilsharmaa
*/

