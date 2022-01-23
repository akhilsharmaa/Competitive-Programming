#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
      // Taking INPUT Array
      int n; cin >> n;
      vector<ll> arr(n);
      for (ll i = 0; i < n; i++)
      cin >> arr[i]; // input-values
      

      ll maxnum = INT_MIN;
      ll minnum = INT_MAX;

      // Print Ouput of Arr-Vector 
      for (int i = 0; i < n; i++){
         maxnum = max(maxnum, arr[i]);
         minnum = min(minnum, arr[i]);
      }

      if(maxnum == minnum){
          cout << 0 << "\n";
      }else
      cout << (maxnum - 1) - (minnum + 1) << "\n"; 

   }

   return 0;
}