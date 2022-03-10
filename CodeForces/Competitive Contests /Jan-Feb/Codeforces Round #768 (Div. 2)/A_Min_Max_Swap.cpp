#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
       // Taking INPUT Array
       int n; cin >> n;
       vector<int> arr(n);
       for (int i = 0; i < n; i++)
       cin >> arr[i]; // input-values
       
        vector<int> arr2(n);
       for (int i = 0; i < n; i++)
       cin >> arr2[i]; // input-values
       
       
       for (int i = 0; i < n; i++){
           if(arr[i] < arr2[i]){
               swap(arr[i], arr2[i]);
           }
       }

        int max_arr = INT_MIN;
    
        for (auto &&i : arr){
            max_arr = max(max_arr, i);
        }
        
        
        int max_arr2 = INT_MIN;
    
        for (auto &&i : arr2){
            max_arr2 = max(max_arr2, i);
        }
        
        cout << max_arr2 * max_arr << "\n"; 
      
   }

   return 0;
}