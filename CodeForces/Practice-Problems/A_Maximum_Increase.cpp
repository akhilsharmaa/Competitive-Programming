#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 702A - Maximum Increase Accepted

void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values
   
   ll longest = INT_MIN;

    ll curr = 1;
   for (int i = 0; i < n; i++){
       longest = max(longest, curr);

       if(arr[i] < arr[i+1]){
           curr ++;
       }else {
           curr = 1;
       }

   }

    cout << longest << "\n";
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

