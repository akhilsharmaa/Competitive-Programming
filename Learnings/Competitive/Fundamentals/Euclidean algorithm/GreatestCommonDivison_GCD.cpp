#include <bits/stdc++.h>
using namespace std;

/* Euclid's GCD(Greatest comman divisor) Algorithm  
    : Largest no. that divdes both the number.
    
   eg. num1 = 20 | num2 = 12 
   Output = 4 

   Time complexity = O(log n)

----------------------------------------------
   APPROACH : GDC(a, b) = GDC(b, a % b)
----------------------------------------------
*/

// Extremely simple using Recursion :) 
int gcd_recursion(int a, int b){
    // Base case
    if ( b == 0) return a;
    return gcd_recursion(b, a % b);
}


int main(){   
   cout<< gcd_recursion(12, 20);
   return 0;
}