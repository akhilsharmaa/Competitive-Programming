#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

int main(){

    bool arr[MOD];

    for (ll i = 1; i * i * i < MOD; i++){
        
        ll square = i * i; 
        ll cube = i * i * i; 

        arr[square] =  true;
        arr[cube] =  true;

    }
    

    int testCase;
    cin >> testCase;
   
    while(testCase--){
      

       ll n ;
       cin >> n;

        int count = 0;
       for (int i = 1; i < n; i++){
           if(arr[i]){
               count ++ ;
           }
       }
       
      cout << count <<"\n";
   }

   return 0;
}