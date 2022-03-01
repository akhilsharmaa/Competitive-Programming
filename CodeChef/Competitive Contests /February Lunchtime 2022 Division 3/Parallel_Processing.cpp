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
    
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values

//    sort(arr.begin(), arr.end()); 

   ll l = 1, r = n-2; 
   ll leftSum = arr[0], rightSum = arr[n-1]; 

   while(l <= r){
       if(leftSum + arr[l] < rightSum + arr[r]){
           leftSum += arr[l];
           l++;
       }else{
           rightSum += arr[r];
           r--;
       }
   }

   cout << max(leftSum, rightSum) << endl; 
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

