#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 116A - Tram ACCEPTED :) 

void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> enters(n);
   vector<int> exit(n);

    int maxPassanger = 0;
    int curr = 0; 

   for (int i = 0; i < n; i++){
        cin >> exit[i] >> enters[i]; // input-values

        curr = (curr - exit[i]) + enters[i]; 
        maxPassanger = max(maxPassanger, curr);
   }
   
    cout << maxPassanger << "\n";

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

