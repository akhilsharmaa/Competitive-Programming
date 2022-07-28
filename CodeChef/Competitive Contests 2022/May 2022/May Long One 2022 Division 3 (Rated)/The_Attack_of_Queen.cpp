/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    
   ll n, x, y;
   cin >> n >> x >> y;

   ll h_V = (n*2)-2 ;
   ll c1 =  min(x, y)-1;
   ll c2 = min(x,(n-y)+1)-1;
   ll c3 = min((n-x)+1,y)-1;
   ll c4 = min(n-x, n-y);

    ll ans = c1+c2+c3+c4 + h_V;
    cout << ans<< endl;
}


int main(){

   cin.tie(NULL);
   ios_base::sync_with_stdio(false);
   int t; cin >> t;
   while(t--)solve();

   return 0;
}

