/* 
   Author - @akhilsharmaa
   C++ code by Akhilesh Sharma
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int arr[100] = {0};

int fib(int n){
    
    if(n == 0) return 0;
    if(n == 1) return 1;

    if(arr[n] != 0){
        return arr[n];
    }

    int res = fib(n - 1) + fib(n - 2);
    arr[n] = res;
    return res;
}


int main(){

   int t; cin >> t;
   while(t--){
        ll  n;
        cin >> n;
        cout << fib(n) << endl;
   };

   return 0;
}

