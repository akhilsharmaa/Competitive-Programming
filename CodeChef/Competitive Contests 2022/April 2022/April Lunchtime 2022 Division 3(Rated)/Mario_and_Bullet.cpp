/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    
   ll x, y, z;
   cin >> x >> y >> z;

   ll di = y / x;
   ll ans = z- di; 

   if(ans < 0)ans =0 ;

   cout << ans << endl;
    
}


int main(){

   int t; cin >> t;
   while(t--)solve();

   return 0;
}

