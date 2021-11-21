#include <bits/stdc++.h>
using namespace std;

// Print natural no. via Recursive 
// 10 9 8 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 9 10 
void naturalNumAceDec(int n){
    // Base case
    if (n == 0)return;
    cout<< n << " ";
    // Self work
    naturalNumAceDec(n -1);
    cout<< n << " ";
}


// Print natural no. via Recursive 
// 1 2 3 4 5 6 7 8 9 10 
void naturalNum(int n){
    if(n == 0) return; // Base Case
    naturalNum(n - 1); // Self work
    cout << n << " "; // Print n 
}

int main(){
   naturalNumAceDec(10);

   return 0;
}