#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){

   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);
   
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values
   
   
   sort(arr.begin(), arr.end());
    
   long long sum = 0; 
   for (int i = 0; i < n; i++){

        if(arr[i] % 2 == 0){
            sum += arr[i];
        }

   } 

    cout << sum << endl;

   return 0;
}