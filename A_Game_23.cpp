#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;



void solve(){
    
    ll n, m;
    cin >> n >> m;

    ll cnt = 0;
    while (n <= m){
        
        if(m % n == 0){
            n *= 2;
        }else if(n == m){
            cout << cnt ;
            return;
        }else {
            n *= 3;
        }
        cnt ++;
    }
    
    cout << "-1";
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

