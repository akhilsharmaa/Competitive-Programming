#include <bits/stdc++.h>
using namespace std;

// Print natural no. via Recursive 
void naturalNum(int n){
    if(n == 0) return; // Base Case
    naturalNum(n - 1); // Self work
    cout << n << " "; // Print n 
}

int main(){
   naturalNum(10);

   return 0;
}