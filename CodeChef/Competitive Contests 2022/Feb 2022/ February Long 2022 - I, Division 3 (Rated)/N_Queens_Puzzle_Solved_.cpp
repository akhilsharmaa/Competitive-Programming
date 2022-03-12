#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

double binpow(double a, long long b) {
   double res = 1;
   while (b > 0) {
      if (b & 1)
         res = res * a;
      a = a * a;
      b >>= 1;
   }
   return res;
}

void solve(){
    
   double n ;
   cin >> n;
 
   double c = (0.143 * n);
   cout << round(binpow(c, n)) << "\n";
    
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

