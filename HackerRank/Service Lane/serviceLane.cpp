#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int p, int q, vector<int> arr , int n){

   int min=4;
   for(int j=p;j<=q;j++){
       if(arr[j]<min)
           min=arr[j];
   }

   printf("%d\n",min);
}

int main(){

   // Taking INPUT Array
   int n, t; 
   cin >> n >> t;
   vector<int> arr(n);
   
   for (int i = 0; i < n; i++)
   cin >> arr[i]; // input-values
   
   for (int i = 0; i < t; i++){
      int a, b;
      cin >> a>> b;
      solve(a, b, arr, n);
   }

   return 0;
}