#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

// ACCEPTED :) 

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
       // Taking INPUT Array
       ll n, l, r, k;
       cin >> n >> l >> r >> k;
    
       vector<ll> arr(n);
       for (int i = 0; i < n; i++)
       cin >> arr[i]; // input-values
       
       sort(arr.begin(), arr.end());

       ll min_i = l;
       ll count = 0;
       for (int i = 0; i < n; i++){
           if(arr[i] >= l && arr[i] <= r && arr[i] <= k){
                count ++;
                k -= arr[i];
           }
       }
       
       cout << count <<"\n";
      
   }

   return 0;
}