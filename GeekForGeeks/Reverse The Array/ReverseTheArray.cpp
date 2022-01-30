#include <bits/stdc++.h>
using namespace std;


// *CODE BY AKHILESH 
// C++ 

int main(){

   long long int tCase;
   cin >> tCase;
   
   while(tCase--){
       
       long long int  n;
       cin >> n;
       long long int arr[n];
       for (int i = 0; i < n; i++)
       cin >> arr[i]; // input-values
       
       
       
       for (int i = n- 1; i >= 0; i--)
       cout << arr[i] << " ";  // input-values

   }

   return 0;
}