#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 1300B - Assigning to Classes Accepted 
    
void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;
   int m = n * 2;
   vector<int> arr(m);
   for (int i = 0; i < m; i++)
    cin >> arr[i]; // input-values
   
    sort(arr.begin(), arr.end());
    ll answer = abs(arr[n-1] - arr[n]);

    cout << answer << "\n";
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

