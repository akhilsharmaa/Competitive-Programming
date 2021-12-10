#include <bits/stdc++.h>
using namespace std;

// Accepted :) 
void solve(double meal_cost, int tip_percent, int tax_percent) {
    
    double tip = (tip_percent * meal_cost) / 100;
    double tax = (tax_percent* meal_cost) / 100;
    
    double total_cost = meal_cost + tip + tax;
    cout << lround(total_cost) ;
}


int main(){
    // solve();

   return 0;
}