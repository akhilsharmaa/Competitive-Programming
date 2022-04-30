#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector
#define pYes cout << "YES" << endl; 
#define pNo cout << "NO" << endl; 

int main(){

   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);
   
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values
    
    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum+= arr[i];
    }
    

    if(sum != 0){
        cout << "-1\n";
    }else {
    }

   return 0;
}