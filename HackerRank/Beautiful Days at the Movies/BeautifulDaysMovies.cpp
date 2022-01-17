#include <bits/stdc++.h>
using namespace std;

// FuLLY ACCEPTED & :) 

int reverse(int n){

    string s = "";

    string n_string = to_string(n);
    for (int i = n_string.size() -1 ; i >= 0; i--){
        s += n_string[i];
    }
    
    return stoi(s);
}

int beautifulDays(int i, int j, int k) {

    int days = 0;

    while (i <= j){

        int r = reverse(i);
        
        int diff = i - r;
        if(diff < 0) diff *= -1;

        if(diff % k  == 0){
            days++;
        }

        i++;
    }
    
    return days;
}

int main(){
    
    int i, j, k;
    cin >> i >> j >> k;
    cout<< beautifulDays(i, j, k);

    return 0;
}