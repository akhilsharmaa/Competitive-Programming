#include <bits/stdc++.h>
using namespace std;

#define ll   long long int; 
#define pb   push_back; 
#define MOD  1000000007; 
#define vt   vector;
#define pYes cout << "YES" << endl; 
#define pNo  cout << "NO" << endl; 

// 1373A - Donut Shops ACCEPTED :) 

void solve(){
    
   long long int a, b, c;
   cin >> a >> b >> c;
   
   if(a < c)cout << 1<< " ";
   else cout << -1 << " ";

   if(b * a > c)cout << b;
   else cout << -1;

   cout << "\n";
    
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

