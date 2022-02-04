#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 977A - Wrong Subtraction ACCEPTED :) 

void solve(){
    
   ll n, t;
    cin >> n >> t;

    int i = 0;
   while (i < t){

       if(n % 10 != 0){
           n--;
       }else {
           n /= 10;
       }

       i++;
   }
   
   cout << n ;
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

