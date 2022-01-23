#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

int main(){

int testCase;
cin >> testCase;
   
   while(testCase--){
      
       ll n;
       cin >> n;

        while (n % 10 == 0){
            n /= 10;
        }
        
        while (n > 0){
            cout << n % 10;
            n /= 10;
        }cout << "\n";

   }

   return 0;
}