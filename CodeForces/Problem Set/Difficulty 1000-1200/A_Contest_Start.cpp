#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

// 1539A - Contest Start - SOLUTION | Accepted

int main(){

    int testCase;
    cin >> testCase;
   
   while(testCase--){
       ll n, x, t;
       cin >> n >> x >> t;

       ll z = t/x;

        if(z > n){
            cout << (n -1) * (n)/2 << "\n";
        }
        else
        {
            ll ans = z * n;
            ans -= z * (z + 1)/2;
            cout << ans << "\n";
        }
   }

   return 0;
}