#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// ACCEPTED :) 

void solve(){
    
   
    // Taking INPUT Array
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i]; // input-values
    
    
    ll fromRight = INT_MAX, fromLeft = INT_MAX, fromBoth = INT_MAX;

    // Left
    ll max_val = INT_MIN,min_val = INT_MAX;
    ll max_index = 0, min_index = 0;

    // From Left 
    for (ll i = 0; i < n; i++){
        if(arr[i] > max_val){
            max_index = i;
            max_val = arr[i];
        }
        if(arr[i] < min_val){
            min_index = i;
            min_val = arr[i];
        }
    }
    
    fromLeft = max(max_index, min_index) + 1;
    fromRight = n - (min(max_index, min_index));


    // From Both 
    fromBoth = 
        (n - max(max_index, min_index)) + 
        (min(max_index, min_index) + 1);



    cout << min(fromBoth, min(fromLeft, fromRight)) << '\n';
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
   AUTHOR- 🇦​​​​​🇰​​​​​🇭​​​​​🇮​​​​​🇱​​​​​🇪​​​​​🇸​​​​​🇭​​​​​  🇸​​​​​🇭​​​​​🇦​​​​​🇷​​​​​🇲​​​​​🇦​​​​​
   ID - @akhilsharmaa
*/

