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
   ll n , dollar; 
   cin >> n >> dollar;
   int arr[n];
   for (int i = 0; i < n; i++){
        cin >> arr[i]; // input-values
   }
   
    sort(arr, arr+n);
    ll ans = 0, i = 0;

    while(i < n - 1 && dollar - arr[i] >= 0){

        // if(dollar - arr[i] >= 0){
            ans ++;
            dollar = dollar - arr[i];
        

        i++;
    }

    // cout << "dollar=  " << dollar << " ";
    
    if(dollar - ((double)arr[i]/2) >= 0){
        ans++;
    }

    cout << ans << endl;
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

