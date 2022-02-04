#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 546A - Soldier and Bananas ACCEPTED :) 

void solve(){

    int k, n, w;
    cin >> k >> n >> w; 
    
    int mul = 1, i = 0;
    int total = 0;

    while (i < w){
        
        total += k*mul;
        mul++;
        i++;
    }
    
    total -= n;

    if(total > 0)
    cout << total;
    else cout << "0";
    
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

