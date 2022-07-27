#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;


// 492A - Vanda and Cubes ACCEPTED :) 


void solve(){

    
   ll n, i = 0, sum = 0;
   cin >> n; 

   while (n >= 0){
        i++;
        sum += i;
        n -= sum;
   }

   if(n < 0) i--;
   
   cout << i;
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

