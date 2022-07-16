#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// Accepted :) 

void solve(){
    
   ll n, m;
   cin >> n >> m;

   if(n ==1 && m == 1){
       cout << "0\n";
       return;
   }
   if( n == 1 || m == 1){
       cout << "1\n";
       return;
   }

   cout << "2\n";
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
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​  🇸​​​​​🇭​​​​​🇦​​​​​🇷​​​​​🇲​​​​​🇦​​​​​
   ID - @akhilsharmaa
*/

