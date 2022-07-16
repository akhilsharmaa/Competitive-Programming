#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl;
#define pNo cout << "NO" << endl;

// 144A - Arrival of the General ACCEPTED :) 

void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values
   
   int max_ind, min_index; 
   int max_val = INT_MIN , min_val = INT_MAX;

   for (int i = 0; i < n; i++){

       if(arr[i] > max_val){
            max_val = max(max_val, arr[i]);
            max_ind = i;
       }

       if(arr[i] <= min_val){
           min_val = min(min_val , arr[i]);
           min_index = i;
       }
   }
   
   if(max_ind == 0 && min_index == n-1){
       cout << "0\n";
       return;
   }

   ll ans = (max_ind) + (n - (min_index +1));

   if(max_ind > min_index){
       ans--;
   }

   cout << ans << "\n"; 

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

