#include <bits/stdc++.h>
using namespace std;

// ACCEPTED :) 
int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    long long total = 0;

    for (int i = 0; i < ar.size(); i++){
        for (int j = i; j < ar.size(); j++){
            if(i == j) continue;
            if((ar[i] + ar[j]) % k == 0){
                total++;
            }
        }
    }
    return total;
}


int main(){
    
    int n = 6;
    int k = 3;
    vector<int> ar = {1, 3, 2, 6, 1, 2};
    
    divisibleSumPairs(n, k , ar);

    return 0;
}