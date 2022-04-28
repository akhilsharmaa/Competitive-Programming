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
   ll n; cin >> n;

    int x = sqrt(n), xx = sqrt(n/2);
    if(n % 2 == 0 && x*x == n 
        || 2 * xx * xx == n) {
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

