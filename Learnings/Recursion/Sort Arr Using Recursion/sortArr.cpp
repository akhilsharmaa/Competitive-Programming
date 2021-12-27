#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define MOD 1000000007
#define vt vector

/* Working :) SORT the vector without using loop */

void insert(vt<int> &arr, int temp){
   
   if(arr.size() == 0 || arr[arr.size() - 1] < temp){
      arr.push_back(temp);
      return;
   }

   int val = arr[arr.size() - 1];
   arr.pop_back();

   insert(arr, temp);
   arr.push_back(val);
}

void sort( vt<int> &arr){
   if(arr.size() ==0){
      return;
   }

   int temp = arr[arr.size() -1];
   arr.pop_back();
   sort(arr);
   insert(arr, temp);
}

int main(){
    
   vt<int> arr = {1, 2, 11, 3, 5, 6, 1, 4, 2};

   sort(arr);

   // Print Ouput of Arr-Vector 
   for (auto && i : arr){
      cout << i << " " ;
   }

    return 0;
}