#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;

   int arr[n];
   for (ll i = 0; i < n; i++){
      cin >> arr[i] ;
   }

   int cnt = 0;
   for (int i = 0; i < n; i++){
       int v = i + cnt + 1;
       if(v == arr[i]){
          cnt++;
      } 
   }
   
   
   cout << cnt << "\n"; 
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
