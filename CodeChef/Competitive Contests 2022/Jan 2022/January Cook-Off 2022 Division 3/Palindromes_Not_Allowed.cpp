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
      
      string str = "abcdefghijklmnopqrstuvwxyz";
      int in = 0;
      for (int i = 0; i < n; i++){

          cout << str[in];  
          if(in == 25){
              in = 0;
          }else
          in++;
      }cout << "\n";
      
   }

   return 0;
}