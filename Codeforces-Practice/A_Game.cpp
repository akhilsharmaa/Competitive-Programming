#include <bits/stdc++.h>
using namespace std;

#define ll      long long int
#define pb      push_back
#define MOD     1000000007
#define vt      vector
#define pYes    cout << "YES" << endl;
#define pNo     cout << "NO" << endl;

// 1141A - Game 23 ACCEPTED 

void solve(){
    
    int n, m, d, res = -1;
    cin >> n >> m;

    if (m % n == 0) {
        res = 0;
        d = m / n;
        while (d % 2 == 0) d /= 2, res++;
        while (d % 3 == 0) d /= 3, res++;
        if (d != 1) res = -1;
    }

    cout << res << endl;
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

