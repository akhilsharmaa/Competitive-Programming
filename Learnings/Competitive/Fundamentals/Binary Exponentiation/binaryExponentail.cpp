#include <bits/stdc++.h>
using namespace std;

/* //!  Binary Exponentiation :
        A trick which allows to calculate an 
        using only "O(log n)" multiplications (instead of O(n).
   */

// RECURSIVE approach
long long binpow_recursive(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow_recursive(a, b / 2);
    if (b % 2)
        return res * res * a; // FOR EVEN
    else
        return res * res;   // FOR ODD
}


// Iterative approach
long long binpow_iterative(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


int main(){
   
   int a = 2, b = 16;
   cout << "Find "  << a << "^" << b  << " ?";

   cout << "\nRecursive Solution: " 
        << binpow_recursive(a , b);

   cout << "\nIterative Solution: " 
        << binpow_iterative(a , b);

   return 0;
}