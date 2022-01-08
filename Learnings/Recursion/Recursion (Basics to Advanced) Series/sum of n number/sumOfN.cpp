#include <bits/stdc++.h>
using namespace std;

//IT WORKS 

int total = 0;

int sum (int n){

    if(n == 0){
        return total;
    }

    total =+ sum(n-1);
    return n + total;
}

int main(){
    
    cout << sum(4);

    return 0;
}