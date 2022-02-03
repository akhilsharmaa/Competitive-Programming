#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 1352A - Sum of Round Numbers

void solve(){
    
   ll n;cin >> n;

   ll mul = 1; 
   vt<int> arr;

   int cnt = 0;

   while (n > 0){

       int digit = n % 10;
       int o = digit * mul;

       if(o)
       arr.pb(digit * mul); 

       cnt++;
       mul *= 10;
       n /= 10;
   }
    

    cout << arr.size() << "\n";
   // Print Ouput of Arr-Vector 
   for (auto && i : arr){
      cout << i << " " ;
   } cout << "\n";
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

