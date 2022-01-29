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
      
       int b_req, w_req;
       int bc, wc, z;

       cin >> b_req >> w_req;
       cin >> bc >> wc >> z;

        ll ans = ( b_req * min(wc, bc)) + (w_req * min(wc, bc));
        cout << ans << "\n";
       
   }

   return 0;
}


