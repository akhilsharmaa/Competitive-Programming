#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll> printFirstNegativeInteger(ll arr[], ll n, ll k) {

      queue<int> que;
      vector<ll> res;

      for (int i = 0; i < k-1; i++)
         if(arr[i] < 0)que.push(arr[i]);

      int i = k-1;
      while (i < n){
         
         if(arr[i] < 0)
            que.push(arr[i]);

         if(!que.empty()){
            res.push_back(que.front());
            if(que.front() == arr[i-k+1])
               que.pop();
         }else {
            res.push_back(0);
         }

         i++;
      }
      
      return res;
 }

int main(){

   // Taking INPUT Array
   ll n, k;
   cin >> n >> k;
   ll arr[n];
   
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values

   vector<ll> res = printFirstNegativeInteger(arr, n, k);  
   // Print Ouput of Arr-Vector 
   for (int i = 0; i < res.size(); i++){
      cout << res[i] << " " ;
   }

   return 0;
}