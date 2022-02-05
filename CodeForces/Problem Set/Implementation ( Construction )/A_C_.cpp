#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 1368A - C+= ACCEPTED :) 

void solve(){
    
    ll a, b, n;
    cin >> a >> b >> n;

    int cnt = 0;
    while(a <= n && b <= n){
        if(a > b){
            b += a;
        }else {
            a += b;
        }

        cnt ++;
    }

    cout << cnt << "\n"; 
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

