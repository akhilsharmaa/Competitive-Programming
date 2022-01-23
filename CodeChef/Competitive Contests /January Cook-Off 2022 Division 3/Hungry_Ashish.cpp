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
      
       ll x, y, z;
        cin >> x >> y >> z;

       if(x >= y){
           cout << "PIZZA\n";
       }else if(x >= z){
           cout << "BURGER\n";
       }else if(x < y && x < z){
           cout << "NOTHING\n";
       }
      
   }

   return 0;
}