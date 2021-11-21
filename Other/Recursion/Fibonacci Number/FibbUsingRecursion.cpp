#include <bits/stdc++.h>
using namespace std;

// Recursive Fibonacci function 
// -> returns Fibonacci Number at Nth index

int fib(int n){
    if (n == 1 || n == 0) return n;
    return fib(n-1) +  fib(n - 2);
}

int main(){
   
    cout<< fib(7);

   return 0;
}