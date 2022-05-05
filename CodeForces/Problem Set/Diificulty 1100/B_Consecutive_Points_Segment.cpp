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
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

void solve(){
    
   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);
   
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values
   
    int diff = arr[n-1] - arr[0];
    if(diff <= n + 1){
       pYes
    }else pNo

}


int main(){

   cin.tie(NULL);
   ios_base::sync_with_stdio(false);
   int t; cin >> t;
   while(t--)solve();

   return 0;
}

