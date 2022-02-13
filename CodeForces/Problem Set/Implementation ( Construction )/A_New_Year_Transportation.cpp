#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
    
    int n, t;
    cin >> n >> t;
    int c[n];
    int p = 0;

    for(int i = 0; i < n; i++) cin >> c[i];

    while(p < t - 1) p += c[p];

    if(p == t - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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

