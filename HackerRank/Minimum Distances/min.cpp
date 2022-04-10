#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){

   // Taking INPUT Array
   int n; cin >> n;
   vector<int> arr(n);

   for (int i = 0; i < n; i++){
        cin >> arr[i]; // input-values
   }
    
    int mini = INT_MAX;

    for (int i = 0; i < n; i++){    
        for (int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                mini = min( abs(j -  i),  mini );
            }
        }
    }

    if(mini == 2147483647) mini = -1;   
    cout << mini << endl;

   return 0;
}