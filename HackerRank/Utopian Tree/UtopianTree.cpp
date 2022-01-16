#include <bits/stdc++.h>
using namespace std;

// ACCEPTED SOLVED :) 

int utopianTree(int n) {

    int sum = 0;
    
    for(int i = 0; i <= n; i++){
        
        if(i % 2 == 0){
            sum ++;
        }else {
            sum = sum * 2;
        }
    }
    
    return sum;
}


int main(){
    

    return 0;
}