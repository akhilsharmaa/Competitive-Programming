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
      
       ll n ;
       cin >> n ;

       ll a, b, c;

       ll an = n * 3;

        a = an / 2;
        cout << a << " ";

        b = an / 4;
        cout << b << " ";

        cout << (an - (a + b));

        cout << "\n";
      
   }

   return 0;
}