#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 1433A - Boring Apartments ACCEPTED 

void solve(){
    
   string str;cin >> str;

   int n = str.size();

   int ans = (str[0] - '0') - 1;
   ans *= 10;
    
   switch (n){
   case 1:ans++; break;
   case 2:ans+=3; break;
   case 3:ans+=6; break;
   case 4:ans+=10; break;
   default:
       break;
   } 

   cout << ans << "\n";

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

