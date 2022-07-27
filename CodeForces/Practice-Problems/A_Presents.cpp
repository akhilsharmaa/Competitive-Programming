#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 136A - Presents ACCEPTED :) 

void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n  + 1);
   for (int i = 1; i <= n; i++)
   cin >> arr[i]; // input-values

   map<int, int> mp;

   for (int i = 1; i <= n; i++){
       mp[arr[i]] = i;
   }

    map<int, int>::iterator itr;

    for (itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->second << ' ';
    }

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

