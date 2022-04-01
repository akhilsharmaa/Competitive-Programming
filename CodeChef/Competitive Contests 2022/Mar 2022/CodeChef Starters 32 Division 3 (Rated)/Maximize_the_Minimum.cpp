/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define For(i,j,n) for(int i=(j);i<((int)n);++i)
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 


void solve(){

   int n, k;
    cin >> n >> k;
   int arr[n];
   
   int min_index;
   int mini = INT_MAX;
   for (int i = 0; i < n; i++){
        cin >> arr[i]; // input-values
        
   }
   
   vt<int> mini_arr;
    for (int i = n - 1; i >= 0; i--)
    {
        
    }
    

   int i = min_index, temp = k;
   int maxi = INT_MIN; 
   while (i >= temp && i < n){
       maxi = max(arr[i] , maxi);
       temp++;
       i--;
   }
   
   i = min_index;
   while (i < n && i <= k){
       maxi = max(arr[i] , maxi);
       temp++;
       i++;
   }
    
   cout << min_index << endl;
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

