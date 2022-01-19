#include <bits/stdc++.h>
using namespace std;

// Congratulation

int findDigits(int n) {
    int tmp = n,  total = 0;
    
    while(tmp!=0){
            int r = tmp % 10;
            if(r !=0 && n%r == 0)total++;
            tmp/=10;
    }
    
    return total;
}

int main(){
    
    cout << findDigits(12);

    return 0;
}