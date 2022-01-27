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
      
       ll a, b, k;
       cin >> a >> b >> k;

        ll ds  = a * b;
       ll profit = a * k; 

        cout <<  (profit - ds) <<"\n";

      
   }

   return 0;
}