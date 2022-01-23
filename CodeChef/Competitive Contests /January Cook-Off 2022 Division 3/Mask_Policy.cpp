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
      
       ll n, y;
        cin >> n >> y;

        ll u = n - y;



        if( u > y ){

            cout << y << "\n";

        }else{
            cout << u << "\n";
        }

   }

   return 0;
}